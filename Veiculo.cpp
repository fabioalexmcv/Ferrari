#include <iostream>
#include <string>
#include "Veiculo.h"
#pragma once
using std::cout;
using std::iostream;
using std::string;


Veiculo::Veiculo(){
	this->velocidade = 0;
    this->cor = "";
	this->quantRodas = 0;
	this->capacidade = 0;
}

Veiculo::Veiculo(const Veiculo &v){
	this->velocidade = v.velocidade;
	this->cor = v.cor;
	this->quantRodas = v.quantRodas;
	this->capacidade = v.capacidade;
}

Veiculo::Veiculo(int, const string &, int, int){
	if (velocidade >= 0)
        this->velocidade = velocidade;
    else
        this->velocidade = 0;
    this->cor = cor;
	if (quantRodas >= 0)
		this->quantRodas = quantRodas;
	else
		this->quantRodas = 0;
	this->capacidade = 0;
}

Veiculo::~Veiculo(){
}

void Veiculo::informarQuantRodas() const{
	cout << "Quantidade de rodas: " << quantRodas << '\n';
}

void Veiculo::informarCapacidade() const{
	cout << "Capacidade de pessoas: " << capacidade << '\n';
	
}

ostream &operator << (ostream &output, const Veiculo &veiculo){       //sobrecarga de operadores <<
    output 	<< " Velocidade: " << veiculo.velocidade
			<< " | Cor: " << veiculo.cor 
			<< " | Quantidade de rodas: " << veiculo.quantRodas
			<< " | Capacidade: " << veiculo.capacidade << '\n';
}

const Veiculo &Veiculo::operator = (const Veiculo &veiculo){       //sobrecarga de operadores =
    this->velocidade = veiculo.velocidade;
	this->cor = veiculo.cor;
	this->quantRodas = veiculo.quantRodas;
	this->capacidade = veiculo.capacidade;
    
    return *this;
}   

bool Veiculo::operator== (const Veiculo &veiculo) const{
	if (this->velocidade == veiculo.velocidade)
		return false;
	if (this->cor == veiculo.cor)
		return false;
	if (this->quantRodas == veiculo.quantRodas)
		return false;
	if (this->capacidade == veiculo.capacidade)
		return false;
		
	return true;
}