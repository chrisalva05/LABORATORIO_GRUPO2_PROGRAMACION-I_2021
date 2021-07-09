#include <iostream>
#include <iomanip>
#include <stdexcept>
#include<vector>
#include <typeinfo>
#include "DatosEmpleados.h"
#include "EmpleadosAzafatas.h"
#include "EmpleadosMantenimiento.h"
#include "EmpleadosPilotos.h"
#include "BOLETOS.h"
#include "DATOS_PERSONALES.h"
#include "DatosEmpleados.h"
#include "Aviones.h"
#include "ReservasparaVuelo.h"
using namespace std;
int main(){
	int eleccion;
	cout <<  "\t ===*=*=*=BIENVENIDO A NUESTRA AEROLINA===*=*=*= \n ";
	cout << "\t===*=*=*=Menu Aerolinea Grupo 2===*=*=*=\n";
	cout << "\t ===*=*=*=Elija una Opcion ===*=*=*=\n";
	cout << "\t===*=*=*=  1.  Empleados ===*=*=*=\n";
	cout << "\tt===*=*=*= 2. Ingrese los datos personales ===*=*=*=\n";
	cout << "\tt===*=*=*= 3. Ingrese los datos de su boleto ===*=*=*=\n";
	cout << "\tt == = *= *= *= 4. Reservar su asiento del avion == = *= *= *= \n";
	cout << "\tt == = *= *= *= 5. Consultar los aviones del Aeropuerto == = *= *= *= \n";
	cin >> eleccion;
	switch (eleccion)
	{
	case 1:
		cout << fixed << setprecision(2);
		vector<DatosEmpleados* > Empleados(3);
		Empleados[0] = new EmpleadosPilotos("Steven" "Mejia", "", 800);
		Empleados[1] = new EmpleadosAzafatas("Sultano", "UJCV", "222", 10000, .07);
		Empleados[2] = new EmpleadosMantenimiento("Mengano", "UJCV", "3333", 5000, .05, 300);
		for each (DatosEmpleados * EmpleadosPuntero in Empleados)
		{
			EmpleadosPuntero->Imprimir();
			cout << endl;
			EmpleadosPilotos* DerivadoPuntero = dynamic_cast <EmpleadosPilotos*>(EmpleadosPuntero);
			if (DerivadoPuntero != nullptr)
			{
				double SalarioBaseAnterior = DerivadoPuntero->ObtenerSalarioBase();
				cout << "salario base anterior L " << SalarioBaseAnterior << endl;
				DerivadoPuntero->EstablecerSalarioBase(2.2 * SalarioBaseAnterior);
				cout << "el nuevo salario base con aumento del 10% es L "
					<< DerivadoPuntero->ObtenerSalarioBase() << endl;
			}
			cout << "obtuvo L " << EmpleadosPuntero->CalcularIngresos() << "\n\n";
		}
		for each (const DatosEmpleados * EmpleadoPuntero in Empleados)
		{
			cout << "Eliminando objeto de" << typeid(*EmpleadoPuntero).name() << endl;
			delete EmpleadoPuntero;
		}


	case 2:

		cout << "cout << \t == = *= *= *= UD  a escojido la Opcion #2 porfavor ingrese los siguientes datos == = *= *= *= \n";
		DATOS_PERSONALES PERSONALES("LUIS", "ANIBAL", "GOMEZ", "LUQUE", "LOMAS CASA#3", "DAVIVIENDA POR EL HOTEL ALAMEDA",
			"SOLTERO", "MASCULIO", "02/07/1995", "0815-1995-2015", "25", "3284-6200");
		cout << fixed << setprecision(4);

		cout << "\t ===*=*=*=BIENVENIDO A NUESTRA BASE DE DATOS :) ===*=*=*= \n ";
		cout << "\t DATOS_PERSONALES " << PERSONALES.obtener_Primer_Nombre() << "" << PERSONALES.obtener_primer_Apellido()
			<< "\t DATOS PERSONALES" << PERSONALES.obtener_Segundo_Nombre() << "" << "" << PERSONALES.obtener_Segundo_Apellido()
			<< "\t SU DIRECCION DE CASA ES  " << PERSONALES.obtener_Dirreccion_de_casa()
			<< "\t SU DIRECCION DE TRABAJO ES  " << PERSONALES.obtener_Dirreccion_de_trabajo()

			<< "\t SU ESTADO CIVIL ES  " << PERSONALES.obtener_Estado_civil()
			<< "\t  SU GENERO (M) o (F) ES  " << PERSONALES.obtener_Genero() << endl;

		PERSONALES.obtener_Fecha_de_nacimiento();
		PERSONALES.establecer_Numero_de_ID(15 - 1995 - 2015);
		PERSONALES.establecer_Edad(25);
		PERSONALES.establecer_Numero_de_telefono(3284 - 6200);

	

	case 3:
	cout << "cout << \t == = *= *= *= UD  a escojido la Opcion #3 porfavor ingrese los siguientes datos == = *= *= *= \n";
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


	case 4:
		Reservas reserva1("Airbus A319", "Primera Clase", "M", "8");
		cout << "\n El avion en el que viajara es: " << reserva1.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva1.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva1.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva1.obtenerFiladelAvion() << endl;

		cout << "---------------------------------------------------------------";

		Reservas reserva2("Boeing 737", "Clase Ejecutiva", "C", "7");
		cout << "\n El avion en el que viajara es: " << reserva2.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva2.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva2.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva2.obtenerFiladelAvion() << endl;

		cout << "---------------------------------------------------------------";

		Reservas reserva3("McDonell Douglas", "Clase Economica", "P", "9");
		cout << "\n El avion en el que viajara es: " << reserva3.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva3.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva3.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva3.obtenerFiladelAvion() << endl;

		cout << "---------------------------------------------------------------";

		Reservas reserva4("Boeing 747", "Clase Ejecutiva", "F", "4");
		cout << "\n El avion en el que viajara es: " << reserva4.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva4.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva4.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva4.obtenerFiladelAvion() << endl;

		cout << "---------------------------------------------------------------";

		Reservas reserva5("Airbus A340", "Primera Clase", "G", "10");
		cout << "\n El avion en el que viajara es: " << reserva5.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva5.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva5.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva5.obtenerFiladelAvion() << endl;

		cout << "---------------------------------------------------------------";

		Reservas reserva6("Boeing 767", "Clase Economica", "D", "11");
		cout << "\n El avion en el que viajara es: " << reserva6.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva6.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva6.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva6.obtenerFiladelAvion() << endl;

		cout << "---------------------------------------------------------------";

		Reservas reserva7("AirBus A3030", "Clase Ejecutiva", "K", "6");
		cout << "\n El avion en el que viajara es: " << reserva7.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva7.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva7.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva7.obtenerFiladelAvion() << endl;

		cout << "---------------------------------------------------------------";

		Reservas reserva8("Boeing 757", "Primera Clase", "J", "3");
		cout << "\n El avion en el que viajara es: " << reserva8.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva8.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva8.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva8.obtenerFiladelAvion() << endl;

		cout << "---------------------------------------------------------------";

		Reservas reserva9("Embraer", "Primera Clase", "L", "5");
		cout << "\n El avion en el que viajara es: " << reserva9.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva9.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva9.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva9.obtenerFiladelAvion() << endl;

		cout << "---------------------------------------------------------------";

		Reservas reserva10("Airbus 320", "Clase Economica", "H", "10");
		cout << "\n El avion en el que viajara es: " << reserva10.obtenerAvionparaViaje() << endl;
		cout << "\n Viajara en la categoria de: " << reserva10.obtenerClasedelAvion() << endl;
		cout << "\n El pasajero ira en la fila: " << reserva10.obtenerFiladelAvion() << endl;
		cout << "\n Su numero de asiento es " << reserva10.obtenerFiladelAvion() << endl;



	}


	
   
		

	case 5:
		cout << "\t ===*=*=*=BIENVENIDO A NUESTRA BASE DE DATOS :) ===*=*=*= \n ";
		Aviones avion1("Airbus", "A319", "Comercial", "VP-BHJ", "120");
		cout << "La marca del avion1 es:" << avion1.obtenerMarcadeAvion() << endl;
		cout << "El modelo del avion1 es:        " << avion1.obtenerModelodelAvion() << endl;
		cout << "El tipo del avion es:           " << avion1.obtenerTipodeAvion() << endl;
		cout << "La matricula del avion1 es: " << avion1.obtenerMatriculadelAvion() << endl;
		cout << "Numero de asientos del avion:   " << avion1.obtenerAsientosdelAvion() << endl;

		cout << "----------------------------------------------------------------------";

		Aviones avion2("Boeing", "737", "Comercial", "EI-FRP", "149");
		cout << "\nLa marca del avion2 es " << avion2.obtenerMarcadeAvion();
		cout << "\nEl modelo del avion2 es: " << avion2.obtenerModelodelAvion();
		cout << "\nEl tipo del avion es: " << avion2.obtenerTipodeAvion();
		cout << "\nLa matricula del avion2 es: " << avion2.obtenerMatriculadelAvion();
		cout << "\nNumero de asientos del avion2: " << avion2.obtenerAsientosdelAvion() << endl;

		cout << "-----------------------------------------------------------------------";

		Aviones avion3("McDonell Douglas", "MD-80", "Comercial", "EI-FRP", "135");
		cout << "\nLa marca del avion3 es " << avion3.obtenerMarcadeAvion();
		cout << "\nEl modelo del avion3 es: " << avion3.obtenerModelodelAvion();
		cout << "\nEl tipo del avion es: " << avion3.obtenerTipodeAvion();
		cout << "\nLa matricula del avion3 es: " << avion3.obtenerMatriculadelAvion();
		cout << "\nNumero de asientos del avion3: " << avion3.obtenerAsientosdelAvion() << endl;

		cout << "-----------------------------------------------------------------------";
		Aviones avion4("Boeing", "747", "Comercial", "N718BA", "416");
		cout << "\nLa marca del avion4 es " << avion4.obtenerMarcadeAvion();
		cout << "\nEl modelo del avion4 es: " << avion4.obtenerModelodelAvion();
		cout << "\nEl tipo del avion es: " << avion4.obtenerTipodeAvion();
		cout << "\nLa matricula del avion4 es: " << avion4.obtenerMatriculadelAvion();
		cout << "\nNumero de asientos del avion4: " << avion4.obtenerAsientosdelAvion() << endl;

		cout << "-----------------------------------------------------------------------";

		Aviones avion5("Airbus", "A340", "Comercial", "F-GLZQ", "375");
		cout << "\nLa marca del avion5 es " << avion5.obtenerMarcadeAvion();
		cout << "\nEl modelo del avion5 es: " << avion5.obtenerModelodelAvion();
		cout << "\nEl tipo del avion es: " << avion5.obtenerTipodeAvion();
		cout << "\nLa matricula del avion5 es: " << avion5.obtenerMatriculadelAvion();
		cout << "\nNumero de asientos del avion5: " << avion5.obtenerAsientosdelAvion() << endl;

		cout << "------------------------------------------------------------------------";
		Aviones avion6("Boeing", "767", "Comercial", "N767BA", "250");
		cout << "\nLa marca del avion6 es " << avion6.obtenerMarcadeAvion();
		cout << "\nEl modelo del avion6 es: " << avion6.obtenerModelodelAvion();
		cout << "\nEl tipo del avion es: " << avion6.obtenerTipodeAvion();
		cout << "\nLa matricula del avion6 es: " << avion6.obtenerMatriculadelAvion();
		cout << "\nNumero de asientos del avion6: " << avion6.obtenerAsientosdelAvion() << endl;

		cout << "---------------------------------------------------------------------------";
		Aviones avion7("AirBus", "A330", "Comercial", "EC-NGS", "335");
		cout << "\nLa marca del avion7 es " << avion7.obtenerMarcadeAvion();
		cout << "\nEl modelo del avion7 es: " << avion7.obtenerModelodelAvion();
		cout << "\nEl tipo del avion es: " << avion7.obtenerTipodeAvion();
		cout << "\nLa matricula del avion7 es: " << avion7.obtenerMatriculadelAvion();
		cout << "\nNumero de asientos del avion7: " << avion7.obtenerAsientosdelAvion() << endl;

		cout << "--------------------------------------------------------------------------";
		Aviones avion8("Boeing", "757", "Comercial", "N624AG", "200");
		cout << "\nLa marca del avion8 es " << avion8.obtenerMarcadeAvion();
		cout << "\nEl modelo del avion8 es: " << avion8.obtenerModelodelAvion();
		cout << "\nEl tipo del avion es: " << avion8.obtenerTipodeAvion();
		cout << "\nLa matricula del avion8 es: " << avion8.obtenerMatriculadelAvion();
		cout << "\nNumero de asientos del avion8: " << avion8.obtenerAsientosdelAvion() << endl;

		cout << "-------------------------------------------------------------------------";
		Aviones avion9("Embraer", "170", "Comercial", "HK-4455-X", "80");
		cout << "\nLa marca del avion9 es " << avion9.obtenerMarcadeAvion();
		cout << "\nEl modelo del avion9 es: " << avion9.obtenerModelodelAvion();
		cout << "\nEl tipo del avion es: " << avion9.obtenerTipodeAvion();
		cout << "\nLa matricula del avion9 es: " << avion9.obtenerMatriculadelAvion();
		cout << "\nNumero de asientos del avion9: " << avion9.obtenerAsientosdelAvion() << endl;

		cout << "------------------------------------------------------------------------";
		Aviones avion10("Airbus", "320", "Comercial", "EC-MXP", "220");
		cout << "\nLa marca del avion10 es " << avion10.obtenerMarcadeAvion();
		cout << "\nEl modelo del avion10 es: " << avion10.obtenerModelodelAvion();
		cout << "\nEl tipo del avion es: " << avion10.obtenerTipodeAvion();
		cout << "\nLa matricula del avion10 es: " << avion10.obtenerMatriculadelAvion();
		cout << "\nNumero de asientos del avion10: " << avion10.obtenerAsientosdelAvion();
		default:
			break;
	}

system("pause");
return 0;

}

