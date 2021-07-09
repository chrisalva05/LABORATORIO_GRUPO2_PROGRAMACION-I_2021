#ifndef EMPLEADOSAZAFATAS_H
#define EMPLEADOSAZAFATAS_H
#include <string>
#include "EmpleadosPilotos.h"
class EmpleadosAzafatas : public EmpleadosPilotos
{
public:
	EmpleadosAzafatas(std::string, std::string, std::string, std::string, int,
		std::string, std::string, std::string, int, std::string, double, std::string, int, double = 0.0);
virtual~EmpleadosAzafatas() {};
void EstablecerTareasExtras(const std::string&);
std::string ObtenerTareasExtras()const;
void EstablecerCantidadTareasExtras(int);
int ObtenerCantidadTareasExtras()const;
void EstablecerValorTareasExtras(double);
double ObtenerValorTareasExtras()const;
virtual double CalcularIngresos() const override;
virtual void Imprimir()const;

private:
	std::string TareasExtras;
	int CantidadTareasExtras;
	double ValorTareasExtras;
};

#endif // !EMPLEADOSAZAFATAS_H
