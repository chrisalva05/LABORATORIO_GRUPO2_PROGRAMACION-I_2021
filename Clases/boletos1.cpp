#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "BOLETOS.h"

using namespace std;

int main() {

	BOLETOS boletos1("ALFREDO", "RAMIREZ", "JAPON", "8:00", "15:50", "0815-1995-20157", 27, "088541-50000-9322");
	cout << fixed << setprecision(2);

	cout << "\t ===*=*=*=BIENVENIDO A NUESTRA AEROLINA===*=*=*= \n ";
	cout << "\t BOLETOS " << boletos1.obtener_primer_Nombre() << "" << boletos1.obtener_primer_Apellido()
		<< "\t SU LUGAR DE DESTINO ES " << boletos1.obtener_lugar_de_Destino()
		<< "\t LA HORA DE SALIDA DE SU VUELO " << boletos1.obtener_Hora_de_salida_del_vuelo()
		<< "\t LA HORA DE LLEGADA DE SU VUELO " << boletos1.obtener_Hora_de_llegada_del_vuelo()
		<< "\t  SU NUEMRO DE ID " << boletos1.obtener_numero_de_ID()
		<< "\t  SU NUEMRO DE TARJETA " << boletos1.obtener_numero_de_tarjeta() << endl;
	boletos1.obtener_edad();

	system("pause");
	return 0;

}