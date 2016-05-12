#include "stdafx.h"
#include "Carta.h"


Carta::Carta(){
}//Fin de Constructor default

Carta::Carta(char val, int pal /*bool dispo*/) {

	palo = pal;
	//disponible = dispo;
	asignarValor(val);
	number = val;

}//Fin de ConstructorCarta

int Carta::getPalo(){

	return palo;
}//Fin de metodo getPalo


int Carta::getValor() {

	return valor;

}//Fin de metodo getValor


char* Carta::getTree() {

	return tree;

}//Fin de metodo getValor


/*bool Carta::estaDisponible() {
	
	return disponible;
}//Fin de metodo Disponible


void Carta::setnoDisp() {
	disponible = false;
}

void Carta::setDisp(bool a) {
	disponible = a;
}
*/
void Carta::setPalo(int p) {
	palo = p;
	setTree(p);
}


void Carta::setValor(int v) {
	valor = v;
}

void Carta::setTree(int palo) {

	switch (palo) {

	case  1:
		tree = "de Picas";
		break;
	case 2:
		tree = "de Diamantes";
		break;
	case 3:
		tree = "de Trebol";
		break;
	case 4:
		tree = "de Corazones";
		break;

	}
}


char Carta::getNumber() {
	return number;
}

/**
Este metodo se encarga de convertir el valor asignado mediante un char en un entero que puede ser usado para
sumas y calculos simples de operaciones con cartas, mediante un switch evalua cual es el valor correspondiente
a la carta en cuestion
*/
void Carta::asignarValor(char m)
{

	switch (m) {

	case '2':
		valor = 2;
		break;
	case '3':
		valor = 3;
		break;
	case '4':
		valor = 4;
		break;
	case '5':
		valor = 5;
		break;
	case '6':
		valor = 6;
		break;
	case '7':
		valor = 7;
		break;
	case '8':
		valor = 8;
		break;
	case '9':
		valor = 9;
		break;
	case '1':
		valor = 10;
		break;
	case 'J':
		valor = 11;
		break;
	case 'Q':
		valor = 12;
		break;
	case 'K':
		valor = 14;
		break;
	case 'A':
		valor = 14;
		break;
	}

}//FIN DE ASIGNAR VALOR

Carta::~Carta()
{
}


