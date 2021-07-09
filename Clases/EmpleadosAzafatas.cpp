#include <iostream>
#include <stdexcept>
#include "EmpleadosAzafatas.h"
using namespace std;
EmpleadosAzafatas::EmpleadosAzafatas(string nombre, string apellido, string Id, string nss, int edad,
	string genero, string fechanacimiento, string direccion, int viaje, string destino, double valorviaje,
	string tareasextras, int cantidadtareasextra, double valortareas = 0.0)
	:EmpleadosPilotos(viaje,destino,valorviaje){
	EstablecerCantidadTareasExtras(cantidadtareasextra);
	EstablecerValorTareasExtras(valortareas);
	EstablecerTareasExtras(tareasextras);
}
void EmpleadosAzafatas::EstablecerTareasExtras(const string& tareasextras) {
	TareasExtras = tareasextras;
}
string EmpleadosAzafatas::ObtenerTareasExtras()const {
	return TareasExtras;
}
void EmpleadosAzafatas::EstablecerCantidadTareasExtras(int cantidadtareasextra){
	if (cantidadtareasextra > 0)
		CantidadTareasExtras = cantidadtareasextra;
	else
		throw invalid_argument("La cantidad de Tareas Extras es 0");
}
int EmpleadosAzafatas::ObtenerCantidadTareasExtras()const{
	return CantidadTareasExtras;
}
void EmpleadosAzafatas::EstablecerValorTareasExtras(double valortareas) {
	ValorTareasExtras = valortareas;
}
double EmpleadosAzafatas::ObtenerValorTareasExtras()const{
	return ValorTareasExtras;
}
double EmpleadosAzafatas::CalcularIngresos()const{
	return ObtenerValorViajeAsignado() + ObtenerValorTareasExtras() + DatosEmpleados::ObtenerTotalBonos() 
		- DatosEmpleados::ObtenerTotalDeducciones();
}
void EmpleadosAzafatas::Imprimir()const{
	cout << "La Azafata" << endl;
	DatosEmpleados::Imprimir();
		cout<<"\n Con numero de viaje asignado " << EmpleadosPilotos::ObtenerViajeAsignado()
		<< "\n Con destino a " << EmpleadosPilotos::ObtenerDestinoViaje
		<< "\n Con un valor de viaje de: " << EmpleadosPilotos::ObtenerValorViajeAsignado()
		<< "\n Con cantidad de Tareas extra de: " << ObtenerCantidadTareasExtras()
		<< "\n Con Tareas Extras como: " << ObtenerTareasExtras()
		<< "\n Con un valor acumulado de Tareas extras de: " << ObtenerValorTareasExtras();
}
