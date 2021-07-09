#ifndef DATOSEMPLEADOS_H
#define DATOSEMPLEADOS_H
#include <string>
class DatosEmpleados	
{
public:
	DatosEmpleados(std::string, std::string, std::string,std::string,int, 
		std::string, std::string, std::string,double=0.0, double = 0.0, double = 0.0);
	~DatosEmpleados() {};
	void EstablecerPrimerNombre(const std::string&);
	std::string ObtenerPrimerNombre() const;
	void EstablecerPrimerApellido(const std::string&);
	std::string ObtenerPrimerApellido() const;
	void EstablecerID(const std::string&);
	std::string ObtenerID()const;
	void EstablecerNumeroSeguroSocial(const std::string&);
	std::string ObtenerNumeroSeguroSocial()const;
	void EstablecerEdad(int);
	int ObtenerEdad()const;
	void EstablecerGenero(const std::string&);
	std::string ObtenerGenero()const;
	void EstablecerFechaNacimiento(const std::string&);
	std::string ObtenerFechaNacimiento()const;
	void EstablecerDireccion(const std::string&);
	std::string ObtenerDireccion()const;
	void EstablecerSalarioBase(double);
	double ObtenerSalarioBase()const;
	void EstablecerTotalDeducciones(double);
	double ObtenerTotalDeducciones()const;
	void EstablecerTotalBonos(double);
	double ObtenerTotalBonos()const;
	virtual double CalcularIngresos()const ;
	void Imprimir() const;
private:
	std::string PrimerNombre;
	std::string PrimerApellido;
	std::string ID;
	std::string NumeroSeguroSocial;
	int Edad;
	std::string Genero;
	std::string FechaNacimiento;
	std::string Direccion;
	double SalarioBase;
	double TotalDeducciones;
	double TotalBonos;
};

#endif // !DATOSEMPLEADOS_H


