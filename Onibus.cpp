#include "Onibus.h"
#include <iostream>
#include "Carro.h"
#include "Veiculo.h"
#include "Veiculo.cpp"
using std::cout;
using std::iostream;
using std::string;

Onibus::Onibus(){
	this->aberto = false;
	this->linha = "";
}

Onibus::Onibus(const Onibus &o)
:Veiculo(static_cast< Veiculo >(Veiculo)){
	this->aberto = o.aberto;
	this->linha = o.linha;
}
	
Carro::Carro(bool, const string &)
:Veiculo(velocidade, cor, quantRodas, capacidade){
	this->aberto = aberto;
	this->linha = linha;
}

Onibus::~Onibus(){
}

void Onibus::informarQuantRodas() const{
	cout << "Quantidade de rodas: " << onibus.quantRodas << '\n';
}

void Onibus::informarCapacidade() const{
	cout << "Capacidade de pessoas: " << onibus.capacidade << '\n';
}

void Onibus::mostrarVelocidade() const{
	cout << "Velocidade:" << onibus.velocidade << '\n';
}

void Onibus::abrirPorta() const{
	cout << "A porta será aberta." << '\n';
	this->aberto = true;
}

void Onibus::mostrarLinha() const{
	cout << "Esse ônibus é da linha: " << onibus.linha << '\n';
}

ostream &operator << (ostream &output, const Onibus &onibus){       //sobrecarga de operadores <<
    output 	<< static_cast< Veiculo > (onibus)
			<< " | Aberto: " << onibus.aberto 
			<< " | Linha: " << onibus.linha << '\n';
}

const Onibus &Onibus::operator = (const Onibus &onibus){       //sobrecarga de operadores =
    this->aberto = onibus.aberto;
	this->linha = onibus.linha;
    
    static_cast< Veiculo >(*this) = static_cast< Veiculo > (onibus);
}

bool Onibus::operator== (const Onibus &onibus) const{
	if (this->aberto == onibus.aberto)
		return false;
	if (this->linha == onibus.linha)
		return false;
	if (static_cast< Veiculo >(*this) != static_cast< Veiculo > (onibus))	
		return false;
			
	return true;
}