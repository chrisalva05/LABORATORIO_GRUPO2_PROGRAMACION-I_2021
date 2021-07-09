#include <iostream>
#include <string>
#include <stdexcept>
#include "BOLETOS.h"

using namespace std;

BOLETOS::BOLETOS(string nombre, string apellido, string destino, string llegada,
	string salida, string id, int edad, string tarjeta) {

	primer_Nombre = nombre;
	primer_Apellido = apellido;
	lugar_de_Destio = destino;
	Hora_de_salida_del_vuelo = salida;
	Hora_de_llegada_del_vuelo = llegada;
	numero_de_ID = id;
	edad = edad;
	numero_de_tarjeta = tarjeta;

}

void BOLETOS::establecer_primer_Nombre(string nombre) {
	primer_Nombre = nombre;
}

string BOLETOS::obtener_primer_Nombre()const {
	return primer_Nombre;
}

void BOLETOS::establecer_primer_Apellido(string Apellido) {
	primer_Apellido = Apellido;
}

string BOLETOS::obtener_primer_Apellido()const {
	return primer_Apellido;
}
void BOLETOS::establecer_lugar_de_Destino(string destino) {
	lugar_de_Destio = destino;
}

string BOLETOS::obtener_lugar_de_Destino()const {
	return lugar_de_Destio;
}

void BOLETOS::establecer_Hora_de_salida_del_vuelo(string salida) {
	Hora_de_salida_del_vuelo = salida;
}

string BOLETOS::obtener_Hora_de_llegada_del_vuelo()const {
	return Hora_de_llegada_del_vuelo;
}

void BOLETOS::establecer_Hora_de_llegada_del_vuelo(string llegada) {
	Hora_de_llegada_del_vuelo = llegada;
}

string BOLETOS::obtener_numero_de_ID()const {
	return numero_de_ID;
}

void BOLETOS::establecer_numero_de_ID(string id) {
	numero_de_ID = id;
}

int BOLETOS::obtener_edad()const {
	return edad;
}

void BOLETOS::establecer_edad(int edad) {
	edad = edad;
}

string BOLETOS::obtener_numero_de_tarjeta()const {
	return numero_de_tarjeta;
}

void BOLETOS::establecer_numero_de_tarjeta(string tarjeta) {
	numero_de_tarjeta = tarjeta;
}

void BOLETOS::imprimir_boletos() const {
	cout << "\t POR FAVOR INGRESE SU PRIMER NOMBRE\n" << " " << primer_Apellido
		<< "\t POR FAVOR INGRESE SU LUGAR DE DESTINO ES\n" << " " << lugar_de_Destio
		<< "\t POR FAVOR INGRESE LA HORA DE SALIDA DE SU VUELO PORFAVOR \n" << " " << Hora_de_salida_del_vuelo
		<< "\t POR FAVOR INGRESE LA HORA DE LLEGADA DE SU VUELO PORFAVOR\n" << " " << Hora_de_llegada_del_vuelo
		<< "\t POR FAVOR INGRESE SU NUEMRO DE ID\n" << " " << numero_de_ID
		<< "\t POR FAVOR INGRESE SU EDAD PARA ESTE VUELO\n" << " " << edad
		<< "\t POR FAVOR INGRESE SU NUMERO DE TARJETA CON LA QUE DESEA PAGAR SU VUELO\n" << " " << numero_de_tarjeta << endl;

}