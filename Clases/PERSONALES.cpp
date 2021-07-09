#include <iostream>
#include <iomanip>
#include "DATOS_PERSONALES.h"

using namespace std;

int main() {

	DATOS_PERSONALES PERSONALES("LUIS", "ANIBAL", "GOMEZ", "LUQUE", "LOMAS CASA#3", "DAVIVIENDA POR EL HOTEL ALAMEDA",
		"SOLTERO", "MASCULIO", "02/07/1995", "0815-1995-2015", "25", "3284-6200");
	cout << fixed << setprecision(4);

	cout << "\t ===*=*=*=BIENVENIDO A NUESTRA BASE DE DATOS :) ===*=*=*= \n ";
	cout << "\t DATOS_PERSONALES " << PERSONALES.obtener_Primer_Nombre() << "" << PERSONALES.obtener_primer_Apellido()
		<< "\t DATOS PERSONALES" << PERSONALES.obtener_Segundo_Nombre() << "" << "" << PERSONALES.obtener_Segundo_Apellido()
		<< "\t SU DIRECCION DE CASA ES  " << PERSONALES.obtener_Dirreccion_de_casa()
		<< "\t SU DIRECCION DE TRABAJO ES  " << PERSONALES.obtener_Dirreccion_de_trabajo()

		<< "\t SU ESTADO CIVIL ES  " << PERSONALES.obtener_Estado_civil()
		<< "\t  SU GENERO (M) o (F) ES  " << PERSONALES.obtener_Genero() << endl;

	PERSONALES.obtener_Fecha_de_nacimiento();
	PERSONALES.establecer_Numero_de_ID(15 - 1995 - 2015);
	PERSONALES.establecer_Edad(25);
	PERSONALES.establecer_Numero_de_telefono(3284 - 6200);


	system("pause");
	return 0;

}