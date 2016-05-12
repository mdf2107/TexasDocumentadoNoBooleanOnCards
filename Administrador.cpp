#include "stdafx.h"

#include "Administrador.h"

#include <iostream>

using namespace std;

list<Jugador> Lista;		//Lista de Jugadores participantes de la partida de poker
std::list<Carta> manoRonda; // set de 5 cartas para la partida de poker

Administrador::Administrador()
{

	srand(time(NULL));		//Inicia una semilla de numeros aleatorios
	numJugadores = tamanoArray(); //Llama al metodo tamañoArray para obtener el numero de jugadores

	//Almacena nombres que seran asignados al azar a un numero  de jugadores en la partida con total de 6
	char* partyNames[15] = { "Jorge", " Marco", "Cristina", "Max el Gato", "Alex", "Roberto", "Adriana", "Ruben", "Walter",
						   "Jose", "Daniel", "Luis", "Lucy", "Andrea" };
	
	for (int i = 0; i < numJugadores; i++)					//Ciclo que recorre la lista de jugadores y
	{														//les da nombre
		Jugador temporal(partyNames[rand() % 14]);          //Se crea un jugador temporal con atributo nombre
		Lista.push_front(temporal);
	}
	mazo.barajarCartas();									//Se crea un mazo de cartas mediante llamado a baraja
} // Fin de CONSTRUCTOR Administrador 



int Administrador::tamanoArray() {

	int val;
	val = rand() % 10 + 1;
	return val;
} //Fin de tamanoArray



void Administrador::iniciarJuego() {

	//Se asigna un par de cartas a cada jugador en estos dos ciclos: 
	for (list<Jugador>::iterator it = Lista.begin(); it != Lista.end(); it++) {
		for (int j = 0; j < 2; j++) {					
			it->recibirCarta(mazo.getCarta());
		}//Fin de ciclo que asigna las dos cartas al jugador X 
		
		it->decirCartas();		//Llamado a metodo en la clase jugador que imprime las cartas asignadas																
	}//Fin de ciclo que reparte las dos iniciales a cada jugador

	
	repartoInicial();		    //Llamado a metodo que saca las 5 cartas publicas de la mesa

	//Ciclo que imprime las cartas "Comunes" de los jugadores (las 5 cartas de la mesa)
	for (list<Carta>::iterator it = manoRonda.begin(); it != manoRonda.end(); it++) {		
		cout << "Cartas publicas para los jugadores: " << it->getValor() << " de " << it->getTree() << endl;
	}

}//Fin del metodo iniciarJuego


void Administrador::repartoInicial() {

	//Saca 5 cartas del mazo y las pone en la mesa
	for (int i = 0; i < 5; i++)
	{
		manoRonda.push_front(mazo.getCarta());
	}
}//Fin del metodo repartoInicial


void Administrador::preguntar() {

	Jugador *puntero;				//AUN NO HE USADO ESTE METODO

}//Fin del metodo preguntar


void Administrador::determinarGanador() {

}//Fin del metodo determinarGanador



Administrador::~Administrador()
{

}//Fin de destructor clase Administrador
