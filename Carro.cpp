#include <iostream>
#include "Carro.h"
#include "Veiculo.h"
#include "Veiculo.cpp"
using std::cout;
using std::iostream;
using std::string;

Carro::Carro(){
	this->ligado = true;
}

Carro::Carro(const Carro &c){
	this->ligado = c.ligado;
}

Carro(bool){
	this->ligado = ligado;
}

Carro::~Carro(){
}

void Carro::ligarCarro() const{
	cout << "Status: " << ligado << '\n';
}

void Carro::mostrarVelocidade() const{
    cout << "Velocidade:" << velocidade << '\n';
}

void Carro::mensagem() const{
    cout << "Meu carro está a " << velocidade << "km/h, seu id é " << idFer << "e sua cor é " << cor << '\n';
}

ostream &operator << (ostream &output, const Carro &carro){       //sobrecarga de operadores <<
    output 	<< static_cast< Veiculo > (veiculo)
			<< " | Ligado: " << carro.ligado << '\n';
}

const Carro &Carro::operator = (const Carro &carro){       //sobrecarga de operadores =
    this->ligado = carro.ligado;
    
    return *this;
}