#include <iostream>
#include <string>
#include <stdexcept>
#include "DATOS_PERSONALES.h"

using namespace std;

DATOS_PERSONALES::DATOS_PERSONALES(string nombre, string segundo_nombre, string apellido, string segundo_apellido,
	string dirrecion, string trabajo, string civil, string genero, int nacimiento, int id, int edad, int telefono) {

	Primer_Nombre = nombre;
	Segundo_Nombre = segundo_nombre;
	Primer_Apellido = apellido;
	Segundo_Apellido = segundo_apellido;
	Dirreccion_de_casa = dirrecion;
	Dirreccion_de_trabajo = trabajo;
	Estado_civil = civil;
	Genero = genero;
	Fecha_de_nacimiento = nacimiento;
	Numero_de_ID = id;
	Edad = edad;
	Numero_de_telefono = telefono;
}

void DATOS_PERSONALES::establecer_Primer_Nombre(string nombre) {
	Primer_Nombre = nombre;
}

string DATOS_PERSONALES::obtener_Primer_Nombre()const {
	return Primer_Nombre;
}

void DATOS_PERSONALES::establecer_Segundo_Nombre(string segundo_nombre) {
	Segundo_Nombre = segundo_nombre;
}

string DATOS_PERSONALES::obtener_Segundo_Nombre()const {
	return Segundo_Nombre;
}

void DATOS_PERSONALES::establecer_primer_Apellido(string apellido) {
	Primer_Apellido = apellido;
}

string DATOS_PERSONALES::obtener_primer_Apellido()const {
	return Primer_Apellido;
}

void DATOS_PERSONALES::establecer_Segundo_Apellido(string segundo_apellido) {
	segundo_apellido = segundo_apellido;
}

string DATOS_PERSONALES::obtener_Segundo_Apellido()const {
	return Segundo_Apellido;
}

void DATOS_PERSONALES::establecer_Dirreccion_de_casa(string dirrecion) {
	Dirreccion_de_casa = dirrecion;
}

string DATOS_PERSONALES::obtener_Dirreccion_de_casa()const {
	return Dirreccion_de_casa;
}

void DATOS_PERSONALES::establecer_Dirreccion_de_trabajo(string trabajo) {
	Dirreccion_de_trabajo = trabajo;
}

string DATOS_PERSONALES::obtener_Dirreccion_de_trabajo()const {
	return Dirreccion_de_trabajo;
}

void DATOS_PERSONALES::establecer_Estado_civil(string civil) {
	Estado_civil = civil;
}

string DATOS_PERSONALES::obtener_Estado_civil()const {
	return Estado_civil;
}

void DATOS_PERSONALES::establecer_Genero(string genero) {
	Genero = genero;
}

string DATOS_PERSONALES::obtener_Genero()const {
	return Genero;
}

int DATOS_PERSONALES::obtener_Fecha_de_nacimiento()const {
	return Fecha_de_nacimiento;
}

void DATOS_PERSONALES::establecer_Fecha_de_nacimiento(int nacimiento) {
	Fecha_de_nacimiento = nacimiento;
}

int DATOS_PERSONALES::obtener_Numero_de_ID()const {
	return Numero_de_ID;
}

void DATOS_PERSONALES::establecer_Numero_de_ID(int id) {
	Numero_de_ID = id;
}

int DATOS_PERSONALES::obtener_Edad()const {
	return Edad;
}

void DATOS_PERSONALES::establecer_Edad(int edad) {
	Edad = edad;
}

int DATOS_PERSONALES::obtener_Numero_de_telefono()const {
	return Numero_de_telefono;
}

void DATOS_PERSONALES::establecer_Numero_de_telefono(int telefono) {
	Numero_de_telefono = telefono;
}

void DATOS_PERSONALES::imprime_tus_datos()const
{
	cout << "\t POR FAVOR INGRESE SU PRIMER NOMBRE\n" << " " << Primer_Apellido
		<< "\t POR FAVOR INGRESE SU SEGUNDO NOMBRE ES\n" << " " << Segundo_Apellido
		<< "\t POR FAVOR INGRESE SU DIRRECION DE DOMICILIO \n" << " " << Dirreccion_de_casa
		<< "\t POR FAVOR INGRESE SU DIRRECION DE TRABAJO\n" << " " << Dirreccion_de_trabajo
		<< "\t POR FAVOR INGRESE SUESTADO CIVIL\n" << " " << Estado_civil
		<< "\t POR FAVOR INGRESE SU GENERO (M) O (F) \n" << " " << Genero
		<< "\t POR FAVOR INGRESE SU FECHA DE NACIMIENTO\n" << " " << Fecha_de_nacimiento
		<< "\t POR FAVOR INGRESE SU ID\n" << " " << Numero_de_ID
		<< "\t POR FAVOR INGRESE SU EDAD \n" << " " << Edad
		<< "\t POR FAVOR INGRESE SU NUMERO DE TELEFONO\n" << " " << Numero_de_telefono << endl;
}