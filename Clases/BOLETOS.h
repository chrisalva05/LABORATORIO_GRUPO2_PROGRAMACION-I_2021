#include <iostream>

class BOLETOS
{
public:
	BOLETOS(std::string, std::string, std::string, std::string, std::string, std::string, int, std::string);

	void establecer_primer_Nombre(std::string);
	std::string obtener_primer_Nombre()const;

	void establecer_primer_Apellido(std::string);
	std::string obtener_primer_Apellido()const;

	void establecer_lugar_de_Destino(std::string);
	std::string obtener_lugar_de_Destino()const;

	void establecer_Hora_de_salida_del_vuelo(std::string);
	std::string obtener_Hora_de_salida_del_vuelo()const;

	void establecer_Hora_de_llegada_del_vuelo(std::string);
	std::string obtener_Hora_de_llegada_del_vuelo()const;

	void establecer_numero_de_ID(std::string);
	std::string obtener_numero_de_ID()const;

	void establecer_edad(int);
	int obtener_edad()const;

	void establecer_numero_de_tarjeta(std::string);
	std::string obtener_numero_de_tarjeta()const;

	void imprimir_boletos()const;
	std::string mostrar_boletos()const;



private:
	std::string primer_Nombre;
	std::string primer_Apellido;
	std::string lugar_de_Destio;
	std::string Hora_de_salida_del_vuelo;
	std::string Hora_de_llegada_del_vuelo;
	std::string numero_de_ID;
	int edad;
	std::string numero_de_tarjeta;

};
