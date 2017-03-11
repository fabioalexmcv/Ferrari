#include "Motor.h"
#include <iostream>
using std::cout;

Motor::Motor(){
	this->potencia = 0;
}

Motor::Motor(float potencia){				//Construtor
	this->potencia = potencia;
}

Motor::Motor(const Motor &motor) {			//Construtor de cópia
	this->potencia = motor.potencia;
}

Motor::~Motor(){							//Destrutor
}

double Motor::mostrarPotencia(){
	return this->potencia;
}