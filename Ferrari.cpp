#include "Ferrari.h"
#include <iostream>
using std::cout;

Ferrari::Ferrari(){
    velocidade = 120;
    ligado = true;
    
}

Ferrari::~Ferrari(){
    
}

void Ferrari::mostrarVelocidade(){
    
    cout << "Velocidade:" << velocidade << '\n';
}

void Ferrari::ligarCarro(){
    
    cout << "Ligar o carro?" << ligado << '\n';
}

