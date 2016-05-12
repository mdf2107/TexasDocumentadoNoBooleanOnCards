#include "stdafx.h"
#include "Baraja.h"


#include <iostream>


using namespace std;

list <Carta> Mazo;


Baraja::Baraja()
{
	int tipoCarta [4] = {1,2,3,4}; //array local para asignar un palo a las cartas
	char valorCarta [13] = { '2','3','4','5','6','7','8','9','1','J','Q','K','A' };  //array de chars para asignar valor
	
	srand(time(NULL)); //Inicializa una semilla de numeros aleatorios

}//Fin de Constructor de Baraja


Carta Baraja::getCarta() {

	Carta respuesta;
	int aleatorio = rand() % 52 + 1;
	list<Carta>::iterator it;
	int index = 0;

	for (index = 0, it = Mazo.begin(); index < aleatorio && it != Mazo.end(); index++, it++);

	/*if (it->estaDisponible() == false) {
		if (it == Mazo.end()) {
			do {
				it--;
			} while (it->estaDisponible() != true);
		}
		else

			if (it == Mazo.begin()) {
				do {
					it++;
				} while (it->estaDisponible() != true);
			}
	}*/
		respuesta.setValor(it->getValor());
		respuesta.setPalo(it->getPalo());
		//respuesta.setnoDisp();

		//it->setnoDisp();
	
		return respuesta;
	//}
}//Fin de getCarta



void Baraja::barajarCartas() {
	
	for (int i = 0; i < 4; i++) {
		
		for (int j = 0 ; j < 13; j++) {

			Carta card;

			card.setValor(j + 2);
			card.setPalo(i + 1);
			//card.setDisp(true);
			Mazo.push_front(card);			
		} // Fin de for asignacion 1 a 14
	}//Fin de For asignacion de palos 1 a 4

	imprimirMazo(); //Comprobacion de baraja creada correctamente

}//FIN DE BARAJARCARTAS



void Baraja::resetearDisponibles() {
	for (list<Carta>::iterator it = Mazo.begin(); it != Mazo.end(); it++) {
		//it->setnoDisp();
	}//Recorre toda la lista de cartas y las pone disponibles
}//Fin de resetearDisponibles


void Baraja::imprimirMazo()
{
	for (list<Carta>::iterator it = Mazo.begin(); it != Mazo.end(); it++) { //Recorre el mazo de principio a fin
		
		if (it->getValor() == 14) {								//Maneja una excepcion para imprimir el valor 14 como un AS
			cout << "As" << " " << it->getTree() << "; ";
		}else{
			cout << it->getValor() << " " << it->getTree() << "; ";
		}
	}
	cout << endl;
}//Fin del metodo imprimir Mazo.


Baraja::~Baraja()
{

	
}// Fin de destructor de Baraja.
