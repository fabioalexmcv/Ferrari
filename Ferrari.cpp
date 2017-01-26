#include "Ferrari.h"
#include <iostream>
using std::cout;

Ferrari::Ferrari(){         //Construtor
    this->ligado = true;
    this->velocidade = 120;
    this->idFer = 0;
    this->cor = "desconhecido";
}

Ferrari::Ferrari(const Ferrari &p){         //Construtor de cópia
    ligado = p.ligado;
    velocidade = p.velocidade;
    idFer = p.idFer;
    cor = p.cor;
}

Ferrari::Ferrari(const string &cor, int velocidade, int idFer, bool ligado){
    this->ligado = ligado;
    
    if (velocidade >= 0)
        this->velocidade = velocidade;
    else
        this->velocidade = 0;
    
    this->idFer = idFer;
    
    this->cor = cor;
}

Ferrari::~Ferrari(){            //Destrutor
    
}

Ferrari::mensagem() const{
    cout << "Minha ferrari está a " << velocidade << "km/h, seu id é " << idFer << "e sua cor é " << cor << '\n';
}

void Ferrari::mostrarVelocidade(){
    
    cout << "Velocidade:" << velocidade << '\n';
}

void Ferrari::ligarCarro(){
    
    cout << "Ligar o carro?" << ligado << '\n';
}

