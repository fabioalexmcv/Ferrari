#include "Motor.h"
#include <iostream>
#pragma once
using std::cout;

Motor::Motor(){
    this->potencia = 0;
}

void Motor::mostrarPotencia() const{
    cout << "A potência do motor é " << potencia <<'\n';
}

Motor::~Motor(){
}

