#include "Motor.h"
#include <iostream>
using std::cout;

Motor::Motor(){
    this->potencia = 0;
}

Motor::mostrarPotencia(){
    cout << "A potência do motor é " << potencia <<'\n';
}

Motor::~Motor(){
	delete [] potencia;
}

