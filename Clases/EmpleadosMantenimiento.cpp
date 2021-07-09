#include <iostream>
#include <stdexcept>
#include "EmpleadosMantenimiento.h"
using namespace std;
EmpleadosMantenimiento::EmpleadosMantenimiento(string nombre, string apellido, string Id, string nss, int edad, string genero,
	string fechanacimiento, string direccion, double salariobase, double deducciones, double bono, int cantidadhorasextra,
	double preciohoraextra, double sueldoextra)
	:DatosEmpleados(nombre, apellido, Id, nss, edad, genero, fechanacimiento, direccion, salariobase, deducciones, bono) {
	EstablecerCantidadHorasExtras(cantidadhorasextra);
	EstablecerPrecioHorasExtras(preciohoraextra);
	EstablecerSueldoExtra(sueldoextra);
}
void EmpleadosMantenimiento::EstablecerCantidadHorasExtras(int cantidadhorasextra) {
	if (cantidadhorasextra > 0)
		CantidadHorasExtras = cantidadhorasextra;
	else
		throw invalid_argument("El empleado no tiene horas extra");
}
int EmpleadosMantenimiento::ObtenerCantidadHorasExtras()const {
	return CantidadHorasExtras;
}
void EmpleadosMantenimiento::EstablecerPrecioHorasExtras(double preciohoraextra) {
	if (preciohoraextra >0.0)
		PrecioHoraExtra=preciohoraextra;
	else
		throw invalid_argument("Ingrese el dato correctamente");
}
double EmpleadosMantenimiento::ObtenerPrecioHorasExtras()const {
	return PrecioHoraExtra;
}
void EmpleadosMantenimiento::EstablecerSueldoExtra(double sueldoextra) {
	SueldoExtra = sueldoextra;
}
double EmpleadosMantenimiento::ObtenerSueldoExtra()const {
	return ObtenerCantidadHorasExtras() * ObtenerPrecioHorasExtras();
}
double EmpleadosMantenimiento::CalcularIngresos()const {
	return DatosEmpleados::CalcularIngresos() + ObtenerSueldoExtra();
}
void EmpleadosMantenimiento::Imprimir()const {
	cout << "El empleado de mantenimiento" << endl;
	DatosEmpleados::Imprimir();
	cout << "Cantidad de Horas Extras: " << ObtenerCantidadHorasExtras()
		<< "Precio por Hora Extra: " << ObtenerPrecioHorasExtras()
		<< "con Sueldo extra de: " << ObtenerSueldoExtra();
}
