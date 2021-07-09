#include <iostream>
#include <stdexcept>
#include "EmpleadosPilotos.h"
using namespace std;
EmpleadosPilotos::EmpleadosPilotos(string nombre, string apellido, string Id, string nss, int edad,
	string genero, string fechanacimiento, string direccion, int viaje, string destino, double valorviaje)
	:DatosEmpleados(nombre, apellido, Id, nss, edad, genero, fechanacimiento, direccion){
	EstablecerViajeAsignado(viaje);
	EstablecerValorViajeAsignado(valorviaje);
}
void EmpleadosPilotos::EstablecerViajeAsignado(int viaje){
	ViajeAsignado = viaje;
}
int EmpleadosPilotos::ObtenerViajeAsignado()const {
	return ViajeAsignado;
}
void EmpleadosPilotos::EstablecerDestinoViaje(const string& destino){
	DestinoVuelo = destino;
}
string EmpleadosPilotos::ObtenerDestinoViaje()const {
	return DestinoVuelo;
}
void EmpleadosPilotos::EstablecerValorViajeAsignado(double valorviaje) {
	if (valorviaje>5000)
		ValorViajeAsignado = valorviaje;
	else
		throw invalid_argument("El valor del viaje asignado debe ser >5000)");
}
double EmpleadosPilotos::ObtenerValorViajeAsignado()const {
	return ValorViajeAsignado;
}
double EmpleadosPilotos::CalcularIngresos()const {
	return ObtenerValorViajeAsignado() - DatosEmpleados::CalcularIngresos();
}
void EmpleadosPilotos::Imprimir()const {
	DatosEmpleados::Imprimir();
		cout<< "\n Con numero de viaje asignado " << ObtenerViajeAsignado()
		<< "\n Con destino a " << ObtenerDestinoViaje()
		<< "\n Con un valor de viaje de: " << ObtenerValorViajeAsignado();
}