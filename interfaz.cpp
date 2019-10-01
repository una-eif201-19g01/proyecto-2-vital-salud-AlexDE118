#include "interfaz.h"

//Interfaz::Interfaz() {}

void Interfaz::menuPrincipal()
{
	unsigned int opcion=0;
	while (opcion != 7)
	{
		//menu principal

		system("cls");
		cout << "===========Vital Salud===========" << endl;
		cout << "1- Mantenimiento" << endl;
		cout << "2- Instructores" << endl;
		cout << "3- Socios" << endl;
		cout << "4- Rutinas" << endl;
		cout << "5- Clases" << endl;
		cout << "6- Salones" << endl;
		cout << "7- Salir" << endl;
		cout << endl << "Elija una opcion: ";
		cin >> opcion;

		//entra opcion, muestra el menu adecuado

		switch (opcion)
		{
		case 1:
		{
			system("clear");
			menuMantenimiento();
			break;
		}
		case 2:
		{
			system("clear");
			menuInstructores();
			break;
		}
		case 3:
		{
			system("clear");
			menuSocios();
			break;
		}
		case 4:
		{
			system("clear");
			menuRutinas();
			break;
		}
		case 5:
		{
			system("clear");
			menuClases();
			break;
		}
		case 6:
		{
			system("clear");
			menuSalones();
			break; 
		}
		
		default:
			cout << "Entrada invalida" << endl;
			break;
		}

	}
}

void Interfaz::menuMantenimiento()
{
	unsigned int opcion = 0;

	cout << "=======Mantenimiento=======" << endl
		<< "1- Ingreso de instructores" << endl
		<< "2- Ingreso de socios" << endl
		<< "3- Volver al menu principal" << endl
		<< endl << "Opcion: ";
	cin >> opcion;

	do
	{
		switch (opcion)
		{
		case 1:
		{
			system("cls");
			cout << "OPCION 1 MANTENIMIENTO - POR IMPLEMENTAR" << endl;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "OPCION 2 MANTENIMIENTO - POR IMPLEMENTAR" << endl;
			break;
		}

		default:
			cout << "entrada no valida" << endl;
		}
	} while (opcion != 3);
	system("cls");
	menuPrincipal();
}

void Interfaz::menuInstructores()
{
	unsigned int opcion = 0;

	cout << "=========Instructores=========" << endl
		<< "1- Lista de instructores y alumnos(socios) asociados" << endl
		<< "2- Ver instructor con mejores resultados" << endl
		<< "3- Actualizar rutina de instructores pendientes" << endl
		<< "4- Volver al menu principal"<< endl;
	cout << "Opcion: ";
	cin >> opcion;
	while (opcion != 4)
	{
		switch (opcion)
		{
		case 1:
		{
			system("cls");
			cout << "PruebaInstructores1" << endl;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "PruebaInstructores2" << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "PruebaInstructores3" << endl;
			break;
		}

		}
	}
	system("cls");
	menuPrincipal();
}

void Interfaz::menuSocios()
{
	unsigned int opcion = 0;
	cout << "=========Socios=========" << endl
		<< "1- Mostrar datos generales de socios" << endl
		<< "2- Mostrar datos de socio en especifico" << endl
		<< "3- Asignar socio a rutina" << endl
		<< "4- Mostrar lista de socios en orden de rendimiento."
		<< "5- Volver al meno principal"<< endl;
	cout << "Opcion: ";
	cin >> opcion;
	
	while (opcion!=4)
	{
		switch (opcion)
		{
		case 1:
		{
			system("cls");
			cout << "PruebaSocio1" << endl;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "PruebaSocio2" << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "PruebaSocio3" << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "PruebaSocio4" << endl;
			break;
		}
		}
	}
	system("cls");
	menuPrincipal();
}

void Interfaz::menuRutinas()
{
}

void Interfaz::menuClases()
{
}

void Interfaz::menuSalones()
{
}
