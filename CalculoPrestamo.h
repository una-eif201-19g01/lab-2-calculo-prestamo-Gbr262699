/*
 filename: calculoPrestamo.h
Created by gaston.

Organization:  Universidad Nacional de Costa Rica

Description: lab 2

*/

#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H

using std::string;
#include <cstdint>
#include <string>

class CalculoPrestamo {
private:
	float monto;
	float obtenerPorcentaje(string);
	float calcularInteresMensual(float, float);
	int calcularTiempoEnMeses(string);

public:
	calculoPrestamo();
	string reporteCalculoPrestamo(string, string);
	float getMonto();
	void setMonto(float);
	calculoPrestamo(int64_t)
	std::string reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT);
    


};


#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H
