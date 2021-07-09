#ifndef EMPLEADOSPILOTOS_H
#define EMPLEADOPILOTOS_H
#include <string>
#include "DatosEmpleados.h"
class EmpleadosPilotos : public DatosEmpleados
{
public:
	EmpleadosPilotos(std::string, std::string, std::string, std::string, int,
		std::string, std::string, std::string, int, std::string, double = 0.0);
	virtual~EmpleadosPilotos() {};
	void EstablecerViajeAsignado(int);
	int ObtenerViajeAsignado()const;
	void EstablecerDestinoViaje(const std::string&);
	std::string ObtenerDestinoViaje()const;
	void EstablecerValorViajeAsignado(double);
	double ObtenerValorViajeAsignado()const;
	virtual double CalcularIngresos()const override;
	 void Imprimir()const;
private:
	int ViajeAsignado;
	std::string DestinoVuelo;
	double ValorViajeAsignado;
};

#endif // !EMPLEADOSPILOTOS_H

