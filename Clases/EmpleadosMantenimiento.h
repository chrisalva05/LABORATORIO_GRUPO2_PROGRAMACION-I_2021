#ifndef EMPLEADOSMANTENIMIENTO_H
#define EMPLEADOSMANTENIMIENTO_H
#include <string>
#include "DatosEmpleados.h"
class EmpleadosMantenimiento : public DatosEmpleados
{
public:
	EmpleadosMantenimiento(std::string, std::string, std::string, std::string, int,
		std::string, std::string, std::string, double, double, double, int, double, double);
	virtual ~EmpleadosMantenimiento() {};
	void EstablecerCantidadHorasExtras(int);
	int ObtenerCantidadHorasExtras()const;
	void EstablecerPrecioHorasExtras(double);
	double ObtenerPrecioHorasExtras()const;
	void EstablecerSueldoExtra(double);
	double ObtenerSueldoExtra()const;
	virtual double CalcularIngresos()const override;
 void Imprimir()const;
private:
	int CantidadHorasExtras;
	double PrecioHoraExtra;
	double SueldoExtra;
};
#endif // !EMPLEADOSMANTENIMIENTO_H

