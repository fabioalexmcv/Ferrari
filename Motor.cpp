#include "Motor.h"
#include <iostream>
using std::cout;

Motor::Motor(float potencia){				//Construtor
	this->potencia = potencia;
}

Motor::Motor(const Motor &motor) {			//Construtor de cópia
	this->potencia = motor.potencia;
}

Motor::~Motor(){							//Destrutor
}

float Motor::mostrarPotencia(){
	return this->potencia;
}