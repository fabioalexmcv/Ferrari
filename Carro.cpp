#include <iostream>
#include "Carro.h"
#include "Veiculo.h"
#include "Veiculo.cpp"
using std::cout;
using std::iostream;
using std::string;

Carro::Carro(){
	this->ligado = false;
	this->tamanho = "";
}

Carro::Carro(const Carro &c)
:Veiculo(static_cast< Veiculo >(c)){
	this->ligado = c.ligado;
	this->tamanho = c.tamanho;
}

Carro::Carro(bool, const string &)
:Veiculo(velocidade, cor, quantRodas, capacidade){
	this->ligado = ligado;
	this->tamanho = tamanho;
}

Carro::~Carro(){
}

void Carro::informarQuantRodas() const{
	cout << "Quantidade de rodas: " << quantRodas << '\n';
}

void Carro::informarCapacidade() const{
	cout << "Capacidade de pessoas: " << capacidade << '\n';

void Carro::mostrarVelocidade() const{
    cout << "Velocidade:" << velocidade << '\n';
}

void Carro::ligarCarro() const{
	cout << "O carro será ligado." << '\n';
	this->ligado = true;
}

void Carro::mensagem() const{
    cout << "Meu carro está a " << carro.velocidade 
		<< " km/h, sua cor é " << carro.cor 
		<< " e seu tamanho " << carro.tamanho << '\n';
}

ostream &operator << (ostream &output, const Carro &carro){       //sobrecarga de operadores <<
    output 	<< static_cast< Veiculo > (carro)
			<< " | Ligado: " << carro.ligado 
			<< " | Tamanho: " << carro.tamanho << '\n';
}

const Carro &Carro::operator = (const Carro &carro){       //sobrecarga de operadores =
    this->ligado = carro.ligado;
	this->tamanho = carro.tamanho;
    
    static_cast< Veiculo >(*this) = static_cast< Veiculo > (carro);
}

bool Carro::operator== (const Carro &carro) const{
	if (this->ligado == carro.ligado)
		return false;
	if (this->tamanho == carro.tamanho)
		return false;
	if (static_cast< Veiculo >(*this) != static_cast< Veiculo > (carro))	
		return false;
			
	return true;
}
