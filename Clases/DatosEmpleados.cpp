#include <iostream>
#include <stdexcept>
#include "DatosEmpleados.h"
using namespace std;
DatosEmpleados::DatosEmpleados(string nombre, string apellido, string Id, string nss, int edad=0, string genero,
	string fechanacimiento, string direccion,double sueldobase = 0.0,double deducciones=0.0,double bono=0.0){
	PrimerNombre = nombre;
	PrimerApellido = apellido;
	ID = Id;
	NumeroSeguroSocial = nss;
	EstablecerEdad(edad);
	Genero = genero;
	FechaNacimiento = fechanacimiento;
	Direccion = direccion;
	EstablecerSalarioBase(sueldobase);
	EstablecerTotalDeducciones(deducciones);
	EstablecerTotalBonos(bono);
}
void DatosEmpleados::EstablecerPrimerNombre(const string& nombre) {
	PrimerNombre = nombre;
}
string DatosEmpleados::ObtenerPrimerNombre()const {
	return PrimerNombre;
}
void DatosEmpleados::EstablecerPrimerApellido(const string& apellido) {
	PrimerApellido = apellido;
}
string DatosEmpleados::ObtenerPrimerApellido()const {
	return PrimerApellido;
}
void DatosEmpleados::EstablecerID(const string& Id) {
	ID = Id;
}
string DatosEmpleados::ObtenerID()const {
	return ID;
}
void DatosEmpleados::EstablecerNumeroSeguroSocial(const string& nss) {
	NumeroSeguroSocial = nss;
}
string DatosEmpleados::ObtenerNumeroSeguroSocial()const {
	return NumeroSeguroSocial;
}
void DatosEmpleados::EstablecerEdad(int edad) {
	if (edad > 0)
		Edad = edad;
	else
		throw invalid_argument("La edad ingresada debe ser >0");
}
int DatosEmpleados::ObtenerEdad()const {
	return Edad;
}
void DatosEmpleados::EstablecerGenero(const string& genero) {
	Genero = genero;
}
string DatosEmpleados::ObtenerGenero()const {
	return Genero;
}
void DatosEmpleados::EstablecerFechaNacimiento(const string& fechanacimiento) {
	FechaNacimiento = fechanacimiento;
}
string DatosEmpleados::ObtenerFechaNacimiento()const {
	return FechaNacimiento;
}
void DatosEmpleados::EstablecerDireccion(const string& direccion) {
	Direccion = direccion;
}
string DatosEmpleados::ObtenerDireccion()const {
	return Direccion;
}
void DatosEmpleados::EstablecerSalarioBase(double sueldobase) {
	if (sueldobase >= 0.0)
		SalarioBase = sueldobase;
	else
		throw invalid_argument("El sueldo ingresado debe ser >0");
}
double DatosEmpleados::ObtenerSalarioBase()const {
	return SalarioBase;
}
void DatosEmpleados::EstablecerTotalDeducciones(double deducciones) {
	if (deducciones > 0.0)
		TotalDeducciones = deducciones;
	else
		throw invalid_argument("El empleado no tiene deducciones");

}
double DatosEmpleados::ObtenerTotalDeducciones()const {
	return TotalDeducciones;
}
void DatosEmpleados::EstablecerTotalBonos(double bono) {
	if (bono > 0.0)
		TotalBonos = bono;
	else
		throw invalid_argument("El empleado no tiene bonos");
}
double DatosEmpleados::ObtenerTotalBonos()const {
	return TotalBonos;
}
double DatosEmpleados::CalcularIngresos()const {
	return SalarioBase - TotalDeducciones + TotalBonos;
}
void DatosEmpleados::Imprimir()const {
	cout << "El empleado: " << PrimerNombre << " " << PrimerApellido
		<< "\n Numero de Identidad: " << ID
		<< "\n Numero de seguro social: " << NumeroSeguroSocial
		<< "\n Edad: " << Edad
		<< "\n Genero: " << Genero
		<< "\n Fecha de Nacimiento: " << FechaNacimiento
		<< "\n Direccion: " << Direccion
		<< "\n Con salario base: " << SalarioBase
		<< "\n Deducciones: " << TotalDeducciones
		<< "\n Bonos de : " << TotalBonos;
}

