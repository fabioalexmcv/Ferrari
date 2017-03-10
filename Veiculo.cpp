#include <iostream>
#include <string>
#include "Veiculo.h"
#include "Carro.h"
#include "Moto.h"
#include "Onibus.h"
//#include "Data.h"

using std::iostream;
using std::string;

Veiculo::Veiculo()
:velocidade(0), cor(""), quantRodas(0), capacidade(0)
{
	/*this->velocidade = 0;
    this->cor = "";
	this->quantRodas = 0;
	this->capacidade = 0;*/
}

Veiculo::Veiculo(const Veiculo &veiculo){
	this->velocidade = veiculo.velocidade;
	this->cor = veiculo.cor;
	this->quantRodas = veiculo.quantRodas;
	this->capacidade = veiculo.capacidade;
}

Veiculo::Veiculo(int velocidade, string &cor, int quantRodas, int capacidade){
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

Veiculo::~Veiculo(){
}

/*ostream &operator << (ostream &output, const Veiculo &veiculo){       //sobrecarga de operadores <<
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

bool Veiculo::operator== (const Veiculo &veiculo) const{			//sobrecarga de operadores ==
	if (this->velocidade == veiculo.velocidade)
		return false;
	if (this->cor == veiculo.cor)
		return false;
	if (this->quantRodas == veiculo.quantRodas)
		return false;
	if (this->capacidade == veiculo.capacidade)
		return false;
		
	return true;
}*/
