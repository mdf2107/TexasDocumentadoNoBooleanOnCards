#include "stdafx.h"
#include "Jugador.h"
#include <iostream>

using namespace std;

//std::list <Carta> Mano;

Jugador::Jugador() {

}

Jugador::Jugador(char * nome)
{
	nombre = nome;
	std::cout << "Nuevo jugador, soy " << +nombre << endl; //printer de prueba (BORRAR LUEGO)
	disponible = 300; //Asigna el disponible para apostar a 300

}//Fin del Constructor de Jugador


void Jugador::setNombre(char *name) {
	nombre = name;
	decirCartas();
}//Fin del metodo setNombre 



void Jugador::decirCartas() {
	cout << "Las Cartas de " << nombre << " son: " << endl;

	//Recorre las cartas de principio a fin y las muestra en pantalla
	for (list<Carta>::iterator it = Mano.begin(); it != Mano.end(); it++) {
		cout << "Carta: " << it->getValor() <<" "<< it->getTree() << endl;
	}
}//Fin de decirCartas



char* Jugador::getNombre() {
	return nombre;
}//Fin del metodo getNombre



void Jugador::recibirCarta(Carta nueva) {

	Mano.push_front(nueva); //Hace un push al frente para agregar la carta recibida

}//Fin de recibirCarta



int Jugador::valorJugada()
{
	return 0;
}//fin de metodo valorJugada



int Jugador::apostar() {
	return 0;
}//Fin del metodo apostar


Jugador::~Jugador()
{
}//Fin de destructor
