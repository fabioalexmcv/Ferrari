#include <iostream>
#include <string>
#include "Veiculo.h"
#include "Carro.h"
#include "Moto.h"
#include "Onibus.h"
#include "Data.h"
#include "Motor.h"

using std::iostream;
using std::string;

Veiculo::Veiculo()						//Construtor default
:dataFab(), motor(){
	this->velocidade = 0;
    this->cor = "";
	this->quantRodas = 0;
	this->capacidade = 0;
}

Veiculo::Veiculo(const Veiculo &veiculo)			//Construtor de cópia
:dataFab(veiculo.dataFab), motor(veiculo.motor){
	this->velocidade = veiculo.velocidade;
	this->cor = veiculo.cor;
	this->quantRodas = veiculo.quantRodas;
	this->capacidade = veiculo.capacidade;
}

Veiculo::Veiculo(int velocidade, const string &cor, int quantRodas, int capacidade, const Data &data, const Motor &motors)	//Construtor
:dataFab(data), motor(motors){
	if (velocidade >= 0)
        this->velocidade = velocidade;
    else
        this->velocidade = 0;

    this->cor = cor;

	if (quantRodas >= 0)
		this->quantRodas = quantRodas;
	else
		this->quantRodas = 0;

	if (capacidade >= 0)
		this->capacidade = capacidade;
	else
		this->capacidade = 0;
}

Veiculo::~Veiculo(){					//Destrutor
}

ostream &operator << (ostream &output, const Veiculo &veiculo){       //sobrecarga de operadores <<
    output 	<< " | Data de fabricação: " << veiculo.dataFab
			<< " | Velocidade: " << veiculo.velocidade
			<< " | Cor: " << veiculo.cor 
			<< " | Quantidade de rodas: " << veiculo.quantRodas
			<< " | Capacidade: " << veiculo.capacidade << '\n';
}

const Veiculo &Veiculo::operator = (const Veiculo &veiculo){       //sobrecarga de operadores =
	this->dataFab = veiculo.dataFab;
	this->velocidade = veiculo.velocidade;
	this->cor = veiculo.cor;
	this->quantRodas = veiculo.quantRodas;
	this->capacidade = veiculo.capacidade;
	    
    return *this;
}   

bool Veiculo::operator== (const Veiculo &veiculo) const{			//sobrecarga de operadores ==
	if (this->dataFab == veiculo.dataFab)
		return false;
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
