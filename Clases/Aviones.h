#include <string>

class Aviones
{
public:
	Aviones(std::string, std::string, std::string, std::string, std::string);
	void establecerMarcadeAvion(std::string);
	std::string obtenerMarcadeAvion() const;
	void establecerModelodelAvion(std::string);
	std::string obtenerModelodelAvion() const;
	void establecerTipodeAvion(std::string);
	std::string obtenerTipodeAvion() const;
	void establecerMatriculadelAvion(std::string);
	std::string obtenerMatriculadelAvion() const;
	void establecerAsientosdelAvion(std::string);
	std::string obtenerAsientosdelAvion() const;
	void imprimir() const;
private:
	std::string marcadeavion;
	std::string modelodeavion;
	std::string tipodeavion;
	std::string matriculadelavion;
	std::string asientosdelavion;
};
