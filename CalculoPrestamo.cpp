/*
	filename: calculoPrestamo.cpp
	Created by gaston.

	Organization:  Universidad Nacional de Costa Rica

	Description: lab 2 

*/

#include <iostream>
#include "CalculoPrestamo.h"

float CalculoPrestamo::obtenerPorcentaje(string)
{
	float porcen = 0;
	int busPorcentaje = porcentajeTXT.find("%");

	if (busPorcentaje > 0) {
		porcen = std::stof(porcentajeTXT.substr(0, busPorcentaje));
		if (porcen > 0) {
			porcen = porcen / 100;
		}
	}
	return porcen;
}

float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual)
{
	float inMensuall = 0;
	inMensuall = balance * (tasaAnual / 12);
		return inMensuall;

	
}

int CalculoPrestamo::calcularTiempoEnMeses(string)
{
	int anio;
	int meses;
	int buscarAn = tiempoTXT.find("A");
	int buscarMes = tiempoTXT.find("M");

	if (buscarAn > 0) {
		anio = stoi(tiempoTXT.substr(0, buscarAn));
		if (anio > 0) {
			meses = anio * 12;
		}
	}
	else if (buscarMes > 0) {
		meses = stoi(tiempoTXT.substr(0, buscarMes));
	}

}



CalculoPrestamo::calculoPrestamo()
{
	setMonto(0);
}

string CalculoPrestamo::reporteCalculoPrestamo(string, string)
{
	return string();
}

float CalculoPrestamo::getMonto()
{
	return monto;
	
}

void CalculoPrestamo::setMonto(float)
{
	monto = mon;
}

std::string CalculoPrestamo::reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT) {
	float balante = getMonto();
	int calTMS = calcularTiempoEnMeses(tiempoTXT);

	for (int i = 0; i < calTMS; i++) {
		float inte = calcularInteresMensual(balante, obtenerPorcentaje(porcentajeTXT)
			std::string reporte = "";
		reporte = porcentajeTXT;
		balante = balante + inte;
		return reporte;
	}
}

