#include <string>

class Reservas
{
public:
	Reservas(std::string, std::string, std::string, std::string);
	void establecerAvionparaViaje(std::string);
	std::string obtenerAvionparaViaje() const;
	void establecerClasedelAvion(std::string);
	std::string obtenerClasedelAvion() const;
	void establecerFiladelAvion(std::string);
	std::string obtenerFiladelAvion() const;
	void establecerNumerodeAsientosAvion(std::string);
	std::string obtenerNumerodeAsientosAvion() const;
	void imprimir() const;
private:
	std::string avion;
	std::string clasedevuelo;
	std::string fila;
	std::string numerodeasientos;
};
