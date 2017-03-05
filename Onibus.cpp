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

void abrirPorta::Onibus() const{
	cout << "A porta será aberta." << '\n';
	this->aberto = true;
}

void mostrarLinha::Onibus() const{
	cout << "Esse ônibus é da linha: " << onibus.linha << '\n';
}