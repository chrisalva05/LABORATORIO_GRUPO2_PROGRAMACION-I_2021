#include <iostream>


class DATOS_PERSONALES
{
public:
	DATOS_PERSONALES(std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string,
		int, int, int, int);

	void establecer_Primer_Nombre(std::string);
	std::string obtener_Primer_Nombre()const;

	void establecer_Segundo_Nombre(std::string);
	std::string obtener_Segundo_Nombre()const;

	void establecer_primer_Apellido(std::string);
	std::string obtener_primer_Apellido()const;

	void establecer_Segundo_Apellido(std::string);
	std::string obtener_Segundo_Apellido()const;

	void establecer_Dirreccion_de_casa(std::string);
	std::string obtener_Dirreccion_de_casa()const;

	void establecer_Dirreccion_de_trabajo(std::string);
	std::string obtener_Dirreccion_de_trabajo()const;

	void establecer_Estado_civil(std::string);
	std::string obtener_Estado_civil()const;

	void establecer_Genero(std::string);
	std::string obtener_Genero()const;


	void establecer_Fecha_de_nacimiento(int);
	int obtener_Fecha_de_nacimiento()const;

	void establecer_Numero_de_ID(int);
	int obtener_Numero_de_ID()const;

	void establecer_Edad(int);
	int obtener_Edad()const;

	void establecer_Numero_de_telefono(int);
	int obtener_Numero_de_telefono()const;

	std::string datos()const;
	void imprime_tus_datos()const;

private:

	std::string Primer_Nombre;
	std::string Segundo_Nombre;
	std::string Primer_Apellido;
	std::string Segundo_Apellido;
	std::string Dirreccion_de_casa;
	std::string Dirreccion_de_trabajo;
	std::string Estado_civil;
	std::string Genero;
	int Fecha_de_nacimiento;
	int Numero_de_ID;
	int Edad;
	int Numero_de_telefono;
};

