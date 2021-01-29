#pragma once
#include "stdafx.h"
#include "windows.h"
#include <string>
#include <ctime>
#include <conio.h>

#define Arriba 72
#define Abajo 80
#define Izquierda 75
#define Derecha 77

using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;

using namespace System;



class Nodo
{
public:
	Nodo(char* Even);
	~Nodo();

	char* Evento;
	Nodo* Siguiente;

private:

};

Nodo::Nodo(char* Even)
{
	Evento = Even;
}

Nodo::~Nodo()
{
}


class Lista {
public:
	int Dia;
	int Año;
	int Mes;
	int CantidadEventos = 0;
	Nodo* Inicio;
	Nodo* Fin;

	void Insertar(Nodo *nuevo){
		CantidadEventos++;
		if (Inicio == nullptr) { //Es el primer nodo
			Inicio = nuevo;
			Fin = nuevo;
		}
		else  //Si no es el primero inserto al final
		{
			Fin->Siguiente = nuevo;
			Fin = nuevo;
		}

	}
private:
};

void CrearEvento(int Dia, int Mes, int año, String^ Evnto, array<Lista*>^ EventosAño);

void Exportar(array<Lista*>^ array1, array<Lista*>^ array2, array<Lista*>^ array3, array<Lista*>^ array4, array<Lista*>^ array5, array<Lista*>^ array6,
	array<Lista*>^ array7, array<Lista*>^ array8, array<Lista*>^ array9, array<Lista*>^ array10, array<Lista*>^ array11, array<Lista*>^ array12,
	array<Lista*>^ array13, array<Lista*>^ array14, array<Lista*>^ array15, array<Lista*>^ array16, array<Lista*>^ array19, array<Lista*>^ array20,
	array<Lista*>^ array21, array<Lista*>^ array22, array<Lista*>^ array23, array<Lista*>^ array24, array<Lista*>^ array25);

void Gotoxy(int x, int y);

void ImprimirCalendario(int Año, int Mes, int Dia, Lista* Eventos, String^ Usuario, int* Calendario[]);

void ImprimirMenu(int x, int y, String^ Usuario);

int Zeller(int Año, int Mes, int Dia);

bool Bisiesto(int a);

int DiasDelMes(int mes, int año);

int ContadorBusqueda(int Dia, int Mes, int año);

char* ConvertDotNetAChar(System::String ^cadena);

char* ConvertStdStringAChar(std::string cadena);

int main(array<System::String^>^ args)
{
	time_t Actual = time(0);
	tm* tiempo = localtime(&Actual);
	String^ Usuario1 = "Mautiti";
	String^ Usuario2 = "Motta";
	String^ UsuarioAux = "";
	String^ Contraseña1 = "MauricioLopez0103";
	String^ Contraseña2 = "contraseña";
	String^ ContraseñaAux = "";
	int AuxiliarContador = 0;
	int Año = tiempo->tm_year + 1900;
	int Mes = tiempo->tm_mon;
	int Dia = tiempo->tm_mday;

	bool UsuarioCorrecto = false;

	int Diassemana1[7];
	int Diassemana2[7];
	int Diassemana3[7];
	int Diassemana4[7];
	int Diassemana5[7];
	int Diassemana6[7];
	int* semanas[6] = {Diassemana1,Diassemana2,Diassemana3,Diassemana4,Diassemana5,Diassemana6};

	array<Lista*>^ Eventos2000 = gcnew array<Lista*>(366);
	array<Lista*>^ Eventos2001 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2002 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2003 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2004 = gcnew array<Lista*>(366);
	array<Lista*>^ Eventos2005 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2006 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2007 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2008 = gcnew array<Lista*>(366);
	array<Lista*>^ Eventos2009 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2010 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2011 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2012 = gcnew array<Lista*>(366);
	array<Lista*>^ Eventos2013 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2014 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2015 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2016 = gcnew array<Lista*>(366);
	array<Lista*>^ Eventos2017 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2018 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2019 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2020 = gcnew array<Lista*>(366);
	array<Lista*>^ Eventos2021 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2022 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2023 = gcnew array<Lista*>(365);
	array<Lista*>^ Eventos2024 = gcnew array<Lista*>(366);
	array<Lista*>^ Eventos2025 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux1 = gcnew array<Lista*>(366);
	array<Lista*>^ Aux2 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux3 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux4 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux5 = gcnew array<Lista*>(366);
	array<Lista*>^ Aux6 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux7 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux8 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux9 = gcnew array<Lista*>(366);
	array<Lista*>^ Aux10 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux11 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux12 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux13 = gcnew array<Lista*>(366);
	array<Lista*>^ Aux14 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux15 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux16 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux17 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux18 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux19 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux20 = gcnew array<Lista*>(366);
	array<Lista*>^ Aux21 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux22 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux23 = gcnew array<Lista*>(365);
	array<Lista*>^ Aux24 = gcnew array<Lista*>(366);
	array<Lista*>^ Aux25 = gcnew array<Lista*>(365);
	int aux2 = 0;
	for (int i = 1; i <= 26; i++) {
		for (int j = 1; j <= 12; j++)
		{
			int aux1 = DiasDelMes(j, 2000 + i - 1);
			for (int k = 1; k <= aux1; k++)
			{
				Lista *Nueva = new Lista();
				Nueva->Año = 2000 + i - 1;
				Nueva->Mes = j;
				Nueva->Dia = k;
				switch (i)
				{
				case 1:
					Eventos2000[aux2] = Nueva;
					break;
				case 2:
					Eventos2001[aux2] = Nueva;
					break;
				case 3:
					Eventos2002[aux2] = Nueva;
					break;
				case 4:
					Eventos2003[aux2] = Nueva;
					break;
				case 5:
					Eventos2004[aux2] = Nueva;
					break;
				case 6:
					Eventos2005[aux2] = Nueva;
					break;

				case 7:
					Eventos2006[aux2] = Nueva;
					break;

				case 8:
					Eventos2007[aux2] = Nueva;
					break;

				case 9:
					Eventos2008[aux2] = Nueva;
					break;

				case 10:
					Eventos2009[aux2] = Nueva;
					break;

				case 11:
					Eventos2010[aux2] = Nueva;
					break;

				case 12:
					Eventos2011[aux2] = Nueva;
					break;

				case 13:
					Eventos2012[aux2] = Nueva;
					break;

				case 14:
					Eventos2014[aux2] = Nueva;
					break;

				case 15:
					break;

				case 16:
					Eventos2015[aux2] = Nueva;
					break;

				case 17:
					Eventos2016[aux2] = Nueva;
					break;

				case 18:
					Eventos2017[aux2] = Nueva;
					break;

				case 19:
					Eventos2018[aux2] = Nueva;
					break;

				case 20:
					Eventos2019[aux2] = Nueva;
					break;

				case 21:
					Eventos2020[aux2] = Nueva;
					break;

				case 22:
					Eventos2021[aux2] = Nueva;
					break;

				case 23:
					Eventos2022[aux2] = Nueva;
					break;

				case 24:
					Eventos2023[aux2] = Nueva;
					break;

				case 25:
					Eventos2024[aux2] = Nueva;
					break;

				case 26:
					Eventos2025[aux2] = Nueva;
					break;
				}
				aux2++;
			}
		}
		aux2 = 0;
	}
	while (true)
	{
		Gotoxy(30, 0);
		Console::WriteLine("Biemvenido\nUsuario: \nContraseña: ");
		Gotoxy(9, 1);
		UsuarioAux = Console::ReadLine();
		Gotoxy(12, 2);
		ContraseñaAux = Console::ReadLine();
		if (Usuario1 == UsuarioAux && Contraseña1 == ContraseñaAux || Usuario2 == UsuarioAux && Contraseña2 == ContraseñaAux) {
			UsuarioCorrecto = true;
			Console::WriteLine("Biemvenido a su agenda");
			ImprimirCalendario(Año, Mes, Dia, NULL, Usuario1, semanas);
			break;
		}
	}
	int x = 0;
	int y = 3;

	int xCalendario = 0;
	int yCalendario = 0;
	while (UsuarioCorrecto)
	{
		Gotoxy(x, y);
		if (kbhit()) {
			char tecla = getch();
			if (tecla == 13)
			{
				Gotoxy(0, 20);
				Console::WriteLine("Quiere ingresar un Evento?");
				String^ R1 = Console::ReadLine();
				if (R1 == "si" || R1 == "Si") {
					Console::WriteLine("Ingrese el evento: ");
					String^ Evento = Console::ReadLine();
					switch (Año - 1999)
					{
					case 1:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2000);
						break;
					case 2:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2001);
						break;
					case 3:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2002);
						break;
					case 4:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2003);
						break;
					case 5:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2004);
						break;
					case 6:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2005);
						break;

					case 7:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2006);
						break;

					case 8:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2007);
						break;

					case 9:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2008);
						break;

					case 10:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2009);
						break;

					case 11:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2010);
						break;

					case 12:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2011);
						break;

					case 13:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2012);
						break;

					case 14:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2013);
						break;

					case 15:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2014);
						break;

					case 16:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2015);
						break;

					case 17:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2016);
						break;

					case 18:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2017);
						break;

					case 19:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2018);
						break;

					case 20:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2019);
						break;

					case 21:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2020);
						break;

					case 22:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2021);
						break;

					case 23:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2022);
						break;

					case 24:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2023);
						break;

					case 25:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2024);
						break;

					case 26:
						CrearEvento(semanas[yCalendario][xCalendario], Mes, Año, Evento, Eventos2025);

						break;
					}
				}
				else{
				Dia = semanas[yCalendario][xCalendario];
				}
				Console::Clear();
				int aux2 = ContadorBusqueda(Dia, Mes, Año);
				switch (Año - 1999)
				{
				case 1:
					ImprimirCalendario(Año, Mes, Dia, Eventos2000[aux2], Usuario1, semanas);
					break;
				case 2:
					ImprimirCalendario(Año, Mes, Dia, Eventos2001[aux2], Usuario1, semanas);
					break;
				case 3:
					ImprimirCalendario(Año, Mes, Dia, Eventos2002[aux2], Usuario1, semanas);
					break;
				case 4:
					ImprimirCalendario(Año, Mes, Dia, Eventos2003[aux2], Usuario1, semanas);
					break;
				case 5:
					ImprimirCalendario(Año, Mes, Dia, Eventos2004[aux2], Usuario1, semanas);
					break;
				case 6:
					ImprimirCalendario(Año, Mes, Dia, Eventos2005[aux2], Usuario1, semanas);
					break;

				case 7:
					ImprimirCalendario(Año, Mes, Dia, Eventos2006[aux2], Usuario1, semanas);
					break;

				case 8:
					ImprimirCalendario(Año, Mes, Dia, Eventos2007[aux2], Usuario1, semanas);
					break;

				case 9:
					ImprimirCalendario(Año, Mes, Dia, Eventos2008[aux2], Usuario1, semanas);
					break;

				case 10:
					ImprimirCalendario(Año, Mes, Dia, Eventos2009[aux2], Usuario1, semanas);
					break;

				case 11:
					ImprimirCalendario(Año, Mes, Dia, Eventos2010[aux2], Usuario1, semanas);
					break;

				case 12:
					ImprimirCalendario(Año, Mes, Dia, Eventos2011[aux2], Usuario1, semanas);
					break;

				case 13:
					ImprimirCalendario(Año, Mes, Dia, Eventos2012[aux2], Usuario1, semanas);
					break;

				case 14:
					ImprimirCalendario(Año, Mes, Dia, Eventos2013[aux2], Usuario1, semanas);
					break;

				case 15:
					ImprimirCalendario(Año, Mes, Dia, Eventos2014[aux2], Usuario1, semanas);
					break;

				case 16:
					ImprimirCalendario(Año, Mes, Dia, Eventos2015[aux2], Usuario1, semanas);
					break;

				case 17:
					ImprimirCalendario(Año, Mes, Dia, Eventos2016[aux2], Usuario1, semanas);
					break;

				case 18:
					ImprimirCalendario(Año, Mes, Dia, Eventos2017[aux2], Usuario1, semanas);
					break;

				case 19:
					ImprimirCalendario(Año, Mes, Dia, Eventos2018[aux2], Usuario1, semanas);
					break;

				case 20:
					ImprimirCalendario(Año, Mes, Dia, Eventos2019[aux2], Usuario1, semanas);
					break;

				case 21:
					ImprimirCalendario(Año, Mes, Dia, Eventos2020[aux2], Usuario1, semanas);
					break;

				case 22:
					ImprimirCalendario(Año, Mes, Dia, Eventos2021[aux2], Usuario1, semanas);
					break;

				case 23:
					ImprimirCalendario(Año, Mes, Dia, Eventos2022[aux2], Usuario1, semanas);
					break;

				case 24:
					ImprimirCalendario(Año, Mes, Dia, Eventos2023[aux2], Usuario1, semanas);
					break;

				case 25:
					ImprimirCalendario(Año, Mes, Dia, Eventos2024[aux2], Usuario1, semanas);
					break;

				case 26:
					ImprimirCalendario(Año, Mes, Dia, Eventos2025[aux2], Usuario1, semanas);

					break;
				}
			}
			switch (tecla)
			{
			case Arriba:
				y--;
				yCalendario--;
				break;
			case Abajo:
				y++;
				yCalendario++;
				break;
			case Izquierda:
				x = x - 4;
				xCalendario--;
				break;

			case Derecha:
				x = x + 4;
				xCalendario++;
				break;
			}
			if (x < 0 || x > 25) {
				x = 0;
				xCalendario = 0;
			}
			if (y < 3 || y > 8) {
				y = 3;
				yCalendario = 0;
			}

			else if (tecla == 'a') {
				Gotoxy(0, 0);
				Console::Clear();
				Console::WriteLine("Escoja el año\n-2000\n-2001\n-2002\n-2003\n-2004\n-2005\n-2006\n-2007\n-2008\n-2009\n-2010\n-2011\n-2012\n-2013\n-2014\n-2015\n-2016\n-2017\n-2018\n-2019\n-2020\n-2021\n-2022\n-2023\n-2024\n-2025");
				int y2 = 1;
				int y2Year = 0;
				Gotoxy(0, y2);
				while (true)
				{

					if (kbhit()) {

						char tecla2 = getch();

						if (tecla2 == 13)
						{
							int Year[26] = { 2000,2001,2002,2003,2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015,2016,2017,2018,2019,2020,2021,2022,2023,2024,2025 };
							Año = Year[y2Year];
							break;
						}
						switch (tecla2)
						{
						case Arriba:
							y2 --;
							y2Year--;
							break;
						case Abajo:
							y2 ++;
							y2Year++;
							break;
						}
						if (y2 < 1 || y2 > 26) {
							y2 = 1;
							y2Year = 0;
						}
						Gotoxy(0, y2);
					}
				}

				Console::Clear();
				int aux2 = ContadorBusqueda(Dia, Mes, Año);
				switch (Año - 1999)
				{
				case 1:
					ImprimirCalendario(Año, Mes, Dia, Eventos2000[aux2], Usuario1, semanas);
					break;
				case 2:
					ImprimirCalendario(Año, Mes, Dia, Eventos2001[aux2], Usuario1, semanas);
					break;
				case 3:
					ImprimirCalendario(Año, Mes, Dia, Eventos2002[aux2], Usuario1, semanas);
					break;
				case 4:
					ImprimirCalendario(Año, Mes, Dia, Eventos2003[aux2], Usuario1, semanas);
					break;
				case 5:
					ImprimirCalendario(Año, Mes, Dia, Eventos2004[aux2], Usuario1, semanas);
					break;
				case 6:
					ImprimirCalendario(Año, Mes, Dia, Eventos2005[aux2], Usuario1, semanas);
					break;

				case 7:
					ImprimirCalendario(Año, Mes, Dia, Eventos2006[aux2], Usuario1, semanas);
					break;

				case 8:
					ImprimirCalendario(Año, Mes, Dia, Eventos2007[aux2], Usuario1, semanas);
					break;

				case 9:
					ImprimirCalendario(Año, Mes, Dia, Eventos2008[aux2], Usuario1, semanas);
					break;

				case 10:
					ImprimirCalendario(Año, Mes, Dia, Eventos2009[aux2], Usuario1, semanas);
					break;

				case 11:
					ImprimirCalendario(Año, Mes, Dia, Eventos2010[aux2], Usuario1, semanas);
					break;

				case 12:
					ImprimirCalendario(Año, Mes, Dia, Eventos2011[aux2], Usuario1, semanas);
					break;

				case 13:
					ImprimirCalendario(Año, Mes, Dia, Eventos2012[aux2], Usuario1, semanas);
					break;

				case 14:
					ImprimirCalendario(Año, Mes, Dia, Eventos2013[aux2], Usuario1, semanas);
					break;

				case 15:
					ImprimirCalendario(Año, Mes, Dia, Eventos2014[aux2], Usuario1, semanas);
					break;

				case 16:
					ImprimirCalendario(Año, Mes, Dia, Eventos2015[aux2], Usuario1, semanas);
					break;

				case 17:
					ImprimirCalendario(Año, Mes, Dia, Eventos2016[aux2], Usuario1, semanas);
					break;

				case 18:
					ImprimirCalendario(Año, Mes, Dia, Eventos2017[aux2], Usuario1, semanas);
					break;

				case 19:
					ImprimirCalendario(Año, Mes, Dia, Eventos2018[aux2], Usuario1, semanas);
					break;

				case 20:
					ImprimirCalendario(Año, Mes, Dia, Eventos2019[aux2], Usuario1, semanas);
					break;

				case 21:
					ImprimirCalendario(Año, Mes, Dia, Eventos2020[aux2], Usuario1, semanas);
					break;

				case 22:
					ImprimirCalendario(Año, Mes, Dia, Eventos2021[aux2], Usuario1, semanas);
					break;

				case 23:
					ImprimirCalendario(Año, Mes, Dia, Eventos2022[aux2], Usuario1, semanas);
					break;

				case 24:
					ImprimirCalendario(Año, Mes, Dia, Eventos2023[aux2], Usuario1, semanas);
					break;

				case 25:
					ImprimirCalendario(Año, Mes, Dia, Eventos2024[aux2], Usuario1, semanas);
					break;

				case 26:
					ImprimirCalendario(Año, Mes, Dia, Eventos2025[aux2], Usuario1, semanas);

					break;
				}

			}
			else if (tecla == 'm') {
				Console::Clear();
				Gotoxy(0, 0);
				Console::WriteLine("Ene Feb Mar Abr");
				Gotoxy(0, 2);
				Console::WriteLine("May Jun Jul Ago");
				Gotoxy(0, 4);
				Console::WriteLine("Sep Oct Nov Dic");
				bool años = true;
				int x2 = 0;
				int y2 = 0;
				int x2Mes = 0;
				int y2Mes = 0;
				Gotoxy(x2, y2);
				while (años)
				{
					
					if (kbhit()) {

						char tecla2 = getch();

						if (tecla2 == 13)
						{
							int Meses1[4] = { 0, 1 ,2 ,3 };
							int Meses2[4] = { 4, 5 ,6 ,7 };
							int Meses3[4] = { 8, 9 ,10 ,11 };
							int* Meses[3] = { Meses1,Meses2,Meses3 };
							Mes = Meses[y2Mes][x2Mes];
							break;
						}
						switch (tecla2)
						{
						case Arriba:
							y2 -= 2;
							y2Mes--;
							break;
						case Abajo:
							y2 += 2;
							y2Mes++;
							break;
						case Izquierda:
							x2 = x2 - 4;
							x2Mes--;
							break;
						case Derecha:
							x2 = x2 + 4;
							x2Mes++;
							break;
						}
						if (x2 < 0 || x2 > 12) {
							x2 = 0;
							x2Mes = 0;
						}
						if (y2 < 0 || y2 > 4) {
							y2 = 0;
							y2Mes = 0;
						}
						Gotoxy(x2, y2);
					}
				}

				Console::Clear();
				int aux2 = ContadorBusqueda(Dia, Mes, Año);
				switch (Año - 1999)
				{
				case 1:
					ImprimirCalendario(Año, Mes, Dia, Eventos2000[aux2], Usuario1, semanas);
					break;
				case 2:
					ImprimirCalendario(Año, Mes, Dia, Eventos2001[aux2], Usuario1, semanas);
					break;
				case 3:
					ImprimirCalendario(Año, Mes, Dia, Eventos2002[aux2], Usuario1, semanas);
					break;
				case 4:
					ImprimirCalendario(Año, Mes, Dia, Eventos2003[aux2], Usuario1, semanas);
					break;
				case 5:
					ImprimirCalendario(Año, Mes, Dia, Eventos2004[aux2], Usuario1, semanas);
					break;
				case 6:
					ImprimirCalendario(Año, Mes, Dia, Eventos2005[aux2], Usuario1, semanas);
					break;

				case 7:
					ImprimirCalendario(Año, Mes, Dia, Eventos2006[aux2], Usuario1, semanas);
					break;

				case 8:
					ImprimirCalendario(Año, Mes, Dia, Eventos2007[aux2], Usuario1, semanas);
					break;

				case 9:
					ImprimirCalendario(Año, Mes, Dia, Eventos2008[aux2], Usuario1, semanas);
					break;

				case 10:
					ImprimirCalendario(Año, Mes, Dia, Eventos2009[aux2], Usuario1, semanas);
					break;

				case 11:
					ImprimirCalendario(Año, Mes, Dia, Eventos2010[aux2], Usuario1, semanas);
					break;

				case 12:
					ImprimirCalendario(Año, Mes, Dia, Eventos2011[aux2], Usuario1, semanas);
					break;

				case 13:
					ImprimirCalendario(Año, Mes, Dia, Eventos2012[aux2], Usuario1, semanas);
					break;

				case 14:
					ImprimirCalendario(Año, Mes, Dia, Eventos2013[aux2], Usuario1, semanas);
					break;

				case 15:
					ImprimirCalendario(Año, Mes, Dia, Eventos2014[aux2], Usuario1, semanas);
					break;

				case 16:
					ImprimirCalendario(Año, Mes, Dia, Eventos2015[aux2], Usuario1, semanas);
					break;

				case 17:
					ImprimirCalendario(Año, Mes, Dia, Eventos2016[aux2], Usuario1, semanas);
					break;

				case 18:
					ImprimirCalendario(Año, Mes, Dia, Eventos2017[aux2], Usuario1, semanas);
					break;

				case 19:
					ImprimirCalendario(Año, Mes, Dia, Eventos2018[aux2], Usuario1, semanas);
					break;

				case 20:
					ImprimirCalendario(Año, Mes, Dia, Eventos2019[aux2], Usuario1, semanas);
					break;

				case 21:
					ImprimirCalendario(Año, Mes, Dia, Eventos2020[aux2], Usuario1, semanas);
					break;

				case 22:
					ImprimirCalendario(Año, Mes, Dia, Eventos2021[aux2], Usuario1, semanas);
					break;

				case 23:
					ImprimirCalendario(Año, Mes, Dia, Eventos2022[aux2], Usuario1, semanas);
					break;

				case 24:
					ImprimirCalendario(Año, Mes, Dia, Eventos2023[aux2], Usuario1, semanas);
					break;

				case 25:
					ImprimirCalendario(Año, Mes, Dia, Eventos2024[aux2], Usuario1, semanas);
					break;

				case 26:
					ImprimirCalendario(Año, Mes, Dia, Eventos2025[aux2], Usuario1, semanas);

					break;
				}
			}
			else if (tecla == 'b') {

				
			}
			else if (tecla == 'c') {
			Console::Clear();
			Console::WriteLine("Configuracion de letras de pantalla\nescoja el color\n1) Blanco\n2) Azul");
			String^ auxiliar = Console::ReadLine();
			if (auxiliar == "1") {

				Console::ForegroundColor = ConsoleColor::White;
			}
			else {
				Console::ForegroundColor = ConsoleColor::Blue;
			}
			}
			else if (tecla == 'u') {
			Console::Clear();
			while (true)
			{
				Gotoxy(30, 0);
				Console::WriteLine("Biemvenido\nUsuario: \nContraseña: ");
				Gotoxy(9, 1);
				UsuarioAux = Console::ReadLine();
				Gotoxy(12, 2);
				ContraseñaAux = Console::ReadLine();
				if (Usuario1 == UsuarioAux && Contraseña1 == ContraseñaAux || Usuario2 == UsuarioAux && Contraseña2 == ContraseñaAux) {
					UsuarioCorrecto = true;
					Console::WriteLine("Biemvenido a su agenda");
					ImprimirCalendario(Año, Mes, Dia, NULL, Usuario1, semanas);
					break;
				}
			}
			if (AuxiliarContador % 2 == 0) {

				for (int i = 1; i < 26; i++) {
					for (int j = 1; j <= 12; j++)
					{
						int aux1 = DiasDelMes(j, 2000 + i - 1);
						for (int k = 1; k <= aux1; k++)
						{
							switch (i)
							{
							case 1:
								Aux1[aux2] = Eventos2000[aux2];
								break;
							case 2:
								Aux1[aux2] = Eventos2001[aux2];
								break;
							case 3:
								Aux1[aux2] = Eventos2002[aux2];
								break;
							case 4:
								Aux1[aux2] = Eventos2003[aux2];
								break;
							case 5:
								Aux1[aux2] = Eventos2004[aux2];
								break;
							case 6:
								Aux1[aux2] = Eventos2005[aux2];
								break;

							case 7:
								Aux1[aux2] = Eventos2006[aux2];
								break;

							case 8:
								Aux1[aux2] = Eventos2007[aux2];
								break;

							case 9:
								Aux1[aux2] = Eventos2008[aux2];
								break;

							case 10:
								Aux1[aux2] = Eventos2009[aux2];
								break;

							case 11:
								Aux1[aux2] = Eventos2010[aux2];
								break;

							case 12:
								Aux1[aux2] = Eventos2011[aux2];
								break;

							case 13:
								Aux1[aux2] = Eventos2012[aux2];
								break;

							case 14:
								Aux1[aux2] = Eventos2014[aux2];
								break;

							case 15:
								Aux1[aux2] = Eventos2015[aux2];
								break;

							case 16:
								Aux1[aux2] = Eventos2016[aux2];
								break;

							case 17:
								Aux1[aux2] = Eventos2017[aux2];
								break;

							case 18:
								Aux1[aux2] = Eventos2018[aux2];
								break;

							case 19:
								Aux1[aux2] = Eventos2019[aux2];
								break;

							case 20:
								Aux1[aux2] = Eventos2020[aux2];
								break;

							case 21:
								Aux1[aux2] = Eventos2021[aux2];
								break;

							case 22:
								Aux1[aux2] = Eventos2022[aux2];
								break;

							case 23:
								Aux1[aux2] = Eventos2023[aux2];
								break;

							case 24:
								Aux1[aux2] = Eventos2024[aux2];
								break;

							case 25:
								Aux1[aux2] = Eventos2025[aux2];
								break;
							}
							aux2++;
						}
					}
					aux2 = 0;
				}

			}
			else {

			}
			AuxiliarContador++;
			}
			Gotoxy(x, y);
		}
	}

	return 0;
}

//Convertir de .Net hacia char*
char* ConvertDotNetAChar(System::String ^cadena) {
	char* cad2 = (char*)(void*)Marshal::StringToHGlobalAnsi(cadena);
	return cad2;
};

//Convierte de Char* a .Net
System::String ^ConvertCharADotNet(char* cadena) {
	String ^cad2 = gcnew String(cadena);
	return cad2;
};

//Convierto de char* hacia StdString
std::string ConvertCharAStdString(char* cadena) {
	std::string cad2(cadena);
	return cad2;
};

//Conviert de stdString a char*
char* ConvertStdStringAChar(std::string cadena) {
	char *cad2 = new char[cadena.length() + 1];
	cad2 = strdup(cadena.c_str());
	return cad2;
};

void Gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;

	SetConsoleCursorPosition(hcon, dwPos);
}

void Exportar(array<Lista*>^ array1, array<Lista*>^ array2, array<Lista*>^ array3, array<Lista*>^ array4, array<Lista*>^ array5, array<Lista*>^ array6,
	array<Lista*>^ array7, array<Lista*>^ array8, array<Lista*>^ array9, array<Lista*>^ array10, array<Lista*>^ array11, array<Lista*>^ array12,
	array<Lista*>^ array13, array<Lista*>^ array14, array<Lista*>^ array15, array<Lista*>^ array16, array<Lista*>^ array19, array<Lista*>^ array20,
	array<Lista*>^ array21, array<Lista*>^ array22, array<Lista*>^ array23, array<Lista*>^ array24, array<Lista*>^ array25) {

}

void CrearEvento(int Dia, int Mes, int año, String^ Evento, array<Lista*>^ EventosAño) {
	Lista *Nueva = new Lista();
	char* EventoChance = ConvertDotNetAChar(Evento);
	int contador = 0;
	for  ( int i = 0; i < Mes + 1; i++)
	{
		int aux1 = DiasDelMes(i, año);
		if (i == Mes)
		{
			for (int j = 0; j < Dia; j++)
			{
				contador++;
			}
		}
		else
		{
			for (int j = 0; j < aux1; j++)
			{
				contador++;
			}
		}
	} 
	Nueva = EventosAño[contador];
	Nodo *Nuevo = new Nodo(EventoChance);
	Nueva->Dia = Dia;
	Nueva->Año = año;
	Nueva->Mes = Mes;
	Nueva->Insertar(Nuevo);
	EventosAño[contador] = Nueva;
}

void ImprimirCalendario(int Año, int Mes, int Dia, Lista* Eventos, String^ Usuario, int* m[]) {
	Console::Clear();
	Gotoxy(30, 0);
	Console::WriteLine("Biemvenido a su agenda");
	int y = 1;
	array<String^>^ Meses = gcnew array<String^>(12);
	if (true) {
		Meses[0] = "Enero";
		Meses[1] = "Febrero";
		Meses[2] = "Marzo";
		Meses[3] = "Abril";
		Meses[4] = "Mayo";
		Meses[5] = "Junio";
		Meses[6] = "Julio";
		Meses[7] = "Agosto";
		Meses[8] = "Septiembre";
		Meses[9] = "Octubre";
		Meses[10] = "Noviembre";
		Meses[11] = "Diciembre";
	}
	Console::WriteLine(Meses[Mes]);
	Console::WriteLine("DOM LUN MAR MIE JUE VIE SAB");
	int aux1 = Zeller(Año, Mes + 1, 1);
	for (int i = 0; i < aux1; i++)
	{
		Console::Write("    ");
	}
	Mes++;
	int aux2 = DiasDelMes(Mes, Año);
	int aux3 = aux1;
	int aux4 = 1;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (j < aux3) {
				m[i][j] = 0;
			}
			else {
				m[i][j] = aux4;
				aux4++;
			}
		}
		aux3 = -1;
	}
	for (int i = 1; i <= aux2; i++)
	{
		if (i < 10) {
			Console::Write(i + "   ");
		}
		else if (i >= 10) {
			Console::Write(i + "  ");
		}
		aux1++;
		if (aux1 % 7 == 0) {
			Console::WriteLine();
		}
	}
	Gotoxy(30, 0);
	if (Eventos != NULL)
	{
		if (Eventos->CantidadEventos > 0) {
			array<String^>^ Tarea = gcnew array<String^>(Eventos->CantidadEventos);
			for (int i = 0; i < Eventos->CantidadEventos; i++) {
				char* Aux;
				switch (i + 1)
				{
				case 1:
					Aux = Eventos->Inicio->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 2:
					Aux = Eventos->Inicio->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 3:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 4:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 5:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 6:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 7:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 8:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 9:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 10:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 11:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				case 12:
					Aux = Eventos->Inicio->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Siguiente->Evento;
					Tarea[i] = ConvertCharADotNet(Aux);
					break;
				default:
					break;
				}
			}
			for (int i = 0; i < Eventos->CantidadEventos; i++) {
				Gotoxy(30, y);
				Console::WriteLine("--------------------------------------------------------------------------------");
				y++;
				Gotoxy(30, y);
				Console::WriteLine(Tarea[i]);
				y++;
			}
		}
	}
	else {
		Gotoxy(30, y);
		Console::WriteLine("--------------------------------------------------------------------------------");
		y++;
	}
	Gotoxy(30, y);
	Console::WriteLine("--------------------------------------------------------------------------------");
	Gotoxy(30, y + 1);
	Console::WriteLine(Año + "/" + Meses[Mes-1] + "/" + Dia);
	ImprimirMenu(0, y, Usuario);
}

void ImprimirMenu(int x, int y, String^ Usuario) {
	if (y < 10) {
		Gotoxy(0, 10);
	}
	else {
		Gotoxy(0, y);
	}
	Console::WriteLine("Usuario: " + Usuario);
	Console::WriteLine("F1 = Ayuda\nU = Cambio de Usuario\nI = Importar Agenda\nE = Exportar Agenda\nC = Configuracion\nB = Buscar Evento\nA = Cambiar año\nM = Cambiar mes");
}

int Zeller(int Año, int Mes, int Dia) {
	int a = (14 - Mes) / 12;
	int y = Año - a;
	int m = Mes + 12 * a - 2;

	int d = (Dia + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
	return d;
}

int ContadorBusqueda(int Dia, int Mes, int año) {
	int contador = 0;
	for (int i = 0; i < Mes + 1; i++)
	{
		int aux1 = DiasDelMes(i, año);
		if (i == Mes)
		{
			for (int j = 0; j < Dia; j++)
			{
				contador++;
			}
		}
		else
		{
			for (int j = 0; j < aux1; j++)
			{
				contador++;
			}
		}
	}
	return contador;
}

bool Bisiesto(int a) {
	if (a % 4 != 0) {
		return false;
	}
	else if (a % 100 != 0) {
		return true;
	}
	else if (a % 400 != 0) {
		return false;
	}
	return true;
}

int DiasDelMes(int mes, int año) {
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
		return 31;
	}
	else if (mes == 2) {
		if (Bisiesto(año)) {
			return 29;
		}
		else {
			return 28;
		}
	}
	return 30;
}

