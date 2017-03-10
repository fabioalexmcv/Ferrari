#include <iostream>
#include <string>
#include "Onibus.h"
#include "Carro.h"
#include "Veiculo.h"
#include "Data.h"
using std::cout;
using std::iostream;
using std::string;

Onibus::Onibus(){												//Construtor default
	this->aberto = false;
	this->linha = "";
}

Onibus::Onibus(const Onibus &onibus){							//Construtor de cópia
//:Veiculo(static_cast< Veiculo >(onibus)){
	this->aberto = onibus.aberto;
	this->linha = onibus.linha;
}
	
Onibus::Onibus(bool aberto, const string &linha, const Data &dataFab)				//Construtor
:Veiculo(velocidade, cor, quantRodas, capacidade, dataFab){
	this->aberto = aberto;
	this->linha = linha;
}

Onibus::~Onibus(){												//Destrutor
}

void Onibus::informarQuantRodas(){
	quantRodas = 6;
	cout << "Quantidade de rodas: " << quantRodas << '\n';
}

void Onibus::informarCapacidade(){
	capacidade = 46;
	cout << "Capacidade de pessoas: " << capacidade << '\n';
}

void Onibus::mostrarVelocidade(){
	velocidade = 60;
	cout << "Velocidade:" << velocidade << '\n';
}

void Onibus::abrirPorta(){
	cout << "A porta será aberta." << '\n';
	this->aberto = true;
}

void Onibus::mostrarLinha(){
	cout << "Esse ônibus é da linha: " << this->linha << '\n';
}

ostream &operator << (ostream &output, const Onibus &onibus){	//sobrecarga de operadores <<
    output 	<< " | Aberto: " << onibus.aberto 
			<< " | Linha: " << onibus.linha << '\n';
}

const Onibus &Onibus::operator = (const Onibus &onibus){		//sobrecarga de operadores =
    this->aberto = onibus.aberto;
	this->linha = onibus.linha;
}

bool Onibus::operator== (const Onibus &onibus) const{			//sobrecarga de operadores ==
	if (this->aberto == onibus.aberto)
		return false;
	if (this->linha == onibus.linha)
		return false;
			
	return true;
}
