#include <iostream>
#include "ReservasparaVuelo.h"

using namespace std;

Reservas::Reservas(string av, string categoria, string f, string nasientos) {
	avion = av;
	clasedevuelo = categoria;
	fila = f;
	numerodeasientos = nasientos;
}
void Reservas::establecerAvionparaViaje(string av) {
	avion = av;
}
string Reservas::obtenerAvionparaViaje() const {
	return avion;
}
void Reservas::establecerClasedelAvion(string categoria) {
	clasedevuelo = categoria;
}
string Reservas::obtenerClasedelAvion() const {
	return clasedevuelo;
}

void Reservas::establecerFiladelAvion(string f) {
	fila = f;
}
string Reservas::obtenerFiladelAvion() const {
	return fila;
}
void Reservas::establecerNumerodeAsientosAvion(string nasientos) {
	numerodeasientos = nasientos;
}
string Reservas::obtenerNumerodeAsientosAvion() const {
	return numerodeasientos;
}

void Reservas::imprimir() const {
	cout << "\n El avion en el que viajara es: " << avion;
	cout << "\n Viajara en la categoria de: " << clasedevuelo;
	cout << "\n El pasajero ira en la fila: " << fila;
	cout << "\n Su numero de asiento es " << numerodeasientos;
}