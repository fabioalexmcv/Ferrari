#include <iostream>
#include <string>
#include "Carro.h"
#include "Veiculo.h"
using std::cout;
using std::iostream;
using std::string;

Carro::Carro(){											//Construtor default
	this->ligado = false;
	this->tamanho = "";
	this->quantSoftwares = 0;
	this->software = "";
}

Carro::Carro(const Carro &carro){						//Construtor de cópia
	this->ligado = carro.ligado;
	this->tamanho = carro.tamanho;
	this->quantSoftwares = carro.quantSoftwares;
	this->software = carro.software;
}

Carro::Carro(bool ligado, const string &tamanho, const Data &dataFab, int quantSoftwares, const string &software)		//Construtor
:Veiculo(velocidade, cor, quantRodas, capacidade, dataFab){
	this->ligado = ligado;
	this->tamanho = tamanho;
	this->quantSoftwares = quantSoftwares;
	this->software = software;
}

Carro::~Carro(){										//Destrutor
	delete [] softwareNomes;
}

void Carro::informarQuantRodas(){
	quantRodas = 4;
	cout << "Quantidade de rodas: " << quantRodas << '\n';
}

void Carro::informarCapacidade(){
	capacidade = 5;
	cout << "Capacidade de pessoas: " << capacidade << '\n';
}

void Carro::mostrarVelocidade(){
    velocidade = 80;
	cout << "Velocidade: " << velocidade << "Km/h.\n";
}

void Carro::ligarCarro(){
	cout << "O carro será ligado." << '\n';
	this->ligado = true;
}

void Carro::mensagem() const{
    cout	<< " Seu carro é da cor " << cor 
			<< " e seu porte é " << tamanho << ".\n";
}

void Carro::addSoftware(const string &software) {					//Alocação dinâmica

	string *aux = new string[quantSoftwares];

	for (int i = 0; i < quantSoftwares; i++)
		aux[i] = softwareNomes[i];

	delete[] softwareNomes;

	softwareNomes = new string[++quantSoftwares];

	for (int i = 0; i < quantSoftwares - 1; i++)
		softwareNomes[quantSoftwares - 1] = software;

	delete[] aux;
}

ostream &operator << (ostream &output, const Carro &carro){		//sobrecarga de operadores <<
    output 	<< " | Ligado: " << carro.ligado 
			<< " | Tamanho: " << carro.tamanho
			<< " | Quantidade de Softwares: " << carro.quantSoftwares
			<< " | Software: " << carro.software << '\n';
}

const Carro &Carro::operator = (const Carro &carro){			//sobrecarga de operadores =
    this->ligado = carro.ligado;
	this->tamanho = carro.tamanho;
	this->quantSoftwares = carro.quantSoftwares;
	this->software = carro.software;
	this->softwareNomes = carro.softwareNomes;
}

bool Carro::operator== (const Carro &carro) const{				//sobrecarga de operadores ==
	if (this->ligado == carro.ligado)
		return false;
	if (this->tamanho == carro.tamanho)
		return false;
	if (this->quantSoftwares == carro.quantSoftwares)
		return false;
	if (this->software == carro.software)
		return false;
	if (this->softwareNomes == carro.softwareNomes)
		return false;

	return true;
}
