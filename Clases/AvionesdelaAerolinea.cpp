#include <iostream>
#include "Aviones.h"

using namespace std;

Aviones::Aviones(string marca, string modelo, string tipo, string matricula, string asientos) {
	marcadeavion = marca;
	modelodeavion = modelo;
	tipodeavion = tipo;
	matriculadelavion = matricula;
	asientosdelavion = asientos;
}
void Aviones::establecerMarcadeAvion(string marca) {
	marcadeavion = marca;
}
string Aviones::obtenerMarcadeAvion() const {
	return marcadeavion;
}
void Aviones::establecerModelodelAvion(string modelo) {
	modelodeavion = modelo;
}
string Aviones::obtenerModelodelAvion() const {
	return modelodeavion;
}

void Aviones::establecerTipodeAvion(string tipo) {
	tipodeavion = tipo;
}
string Aviones::obtenerTipodeAvion() const {
	return tipodeavion;
}
void Aviones::establecerMatriculadelAvion(string matricula) {
	matriculadelavion = matricula;
}
string Aviones::obtenerMatriculadelAvion() const {
	return matriculadelavion;
}
void Aviones::establecerAsientosdelAvion(string asientos) {
	asientosdelavion = asientos;
}
string Aviones::obtenerAsientosdelAvion() const {
	return asientosdelavion;
}
void Aviones::imprimir() const {
	cout << "\n La marca del avion es: " << marcadeavion;
	cout << "\n El modelo del avion es: " << modelodeavion;
	cout << "\n El tipo de avion es: " << tipodeavion;
	cout << "\n La matricula del avion es: " << matriculadelavion;
	cout << "\n Numero de asientos del avion: " << asientosdelavion;
}