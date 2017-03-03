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

Carro::Carro(const Carro &c)
:Veiculo(static_cast< Veiculo >(Veiculo)){
	this->ligado = c.ligado;
}

Carro::Carro(bool)
:Veiculo(velocidade, cor, quantRodas, capacidade){
	this->ligado = ligado;
}

Carro::~Carro(){
}

void Carro::mostrarVelocidade() const{
    cout << "Velocidade:" << carro.velocidade << '\n';
}

void Carro::ligarCarro() const{
	cout << "Status: " << ligado << '\n';
}

void Carro::mensagem() const{
    cout << "Meu carro está a " << velocidade << " km/h e sua cor é " << cor << '\n';
}

ostream &operator << (ostream &output, const Carro &carro){       //sobrecarga de operadores <<
    output 	<< static_cast< Veiculo > (veiculo)
			<< " | Ligado: " << carro.ligado << '\n';
}

const Carro &Carro::operator = (const Carro &carro){       //sobrecarga de operadores =
    this->ligado = carro.ligado;
    
    static_cast< Veiculo >(*this) = static_cast< Veiculo > (carro);
}

bool Carro::operator== (const Carro &carro) const{
	if (this->ligado == carro.ligado)
		return false;
	if (static_cast< Veiculo >(*this) != static_cast< Veiculo > (carro))	
		return false;
			
	return true;
}
