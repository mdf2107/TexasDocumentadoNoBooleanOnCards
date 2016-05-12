#pragma once
#include <list>
#include "Carta.h"

/*
La clase Jugador simula los atributos y comportamiento dentro de una partida de poquer. Contiene atributos basicos como
un nombre y monto disponible para apostar.
*/
class Jugador
{

/*
Metodos y variables publicas de la clase Jugador
*/
public:
	
	/*
	Metodo que recibe un objeto carta y lo agrega a la lista personal de cartas del jugador
	*/
	void recibirCarta(Carta);


	/*
	Metodo sin valor de retorno, recorre la lista de Cartas (2) del jugador y la imprime
	*/
	void decirCartas();
	
	std::list<Carta> Mano;	//Lista de cartas que guarda las cartas del usuario

	/*
	Constructor por defecto de la clase Jugador, define un monto disponible para jugar
	*/
	Jugador();


	/*
		Constructor que recibe un char array para asignarlo como el nombre del jugador
	*/
	Jugador(char *);


	/*
	Funcion simple que recibe una linea de caracteres y lo asigna como valor nombre al Jugador
	*/
	void setNombre(char *);
	
	/*
		Funcion simple que funciona para devolver el valor nombre del jugador
	*/
	char* getNombre ();


	/*
	Destructor por defecto de Jugador
	*/
	~Jugador();

/*
Metodos y variables publicas de la clase Jugador
*/
private:
	/*
	Este metodo calcula que tan buena es la jugada que se tiene considerando las cartas que el Administrador asigna,
	y las 5 cartas publicas que se encuentran en la mesa, devuelve un valor basado en las posibilidades de un
	buen movimiento
	*/
	int valorJugada();
	
	/*
	Devuelve un entero como respuesta indicando que el jugador va a apostar en X turno. (Deberia llamar a valorJugada para
	obtener respuesta y ver si juega o o no ?)
	*/
	int apostar();


	


/*
Variables privadas de la clase Jugador.
1. Disponible: Entero que indica cuanto tiene el jugador como disponible para apostar.
2. Nombre: arreglo de caracteres que almacena el nombre del jugador
*/
private:

	
	int disponible;
	int dinero;
	char* nombre; //Variable que almacena el nombre aleatorio asignado al jugador
	

};//Fin de la clase Jugador

