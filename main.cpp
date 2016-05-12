// TexasHoldem.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Baraja.h"
#include <cstdlib>
#include <iostream>

#include "Administrador.h"
using namespace std;

int main()
{	
	cout << "*****===================*****" << endl;
	
	

	Administrador admin;
	admin.iniciarJuego();
	//admin.();
	system("pause");
	//admin.~Administrador();
	return 0;
}

