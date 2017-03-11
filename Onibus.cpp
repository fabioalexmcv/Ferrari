#include <iostream>
#include <string>
#include "Onibus.h"
#include "Carro.h"
#include "Veiculo.h"
using std::cout;
using std::iostream;
using std::string;

Onibus::Onibus(){												//Construtor default
	this->aberto = false;
	this->linha = "";
	this->quantPassageiros = 0;
	this->passageiro = "";
}

Onibus::Onibus(const Onibus &onibus){							//Construtor de cópia
	this->aberto = onibus.aberto;
	this->linha = onibus.linha;
	this->quantPassageiros = onibus.quantPassageiros;
	this->passageiro = onibus.passageiro;
}
	
Onibus::Onibus(bool aberto, const string &linha, const Data &dataFab, int quantPassageiros, const string &passageiro)				//Construtor
:Veiculo(velocidade, cor, quantRodas, capacidade, dataFab){
	this->aberto = aberto;
	this->linha = linha;
	this->quantPassageiros = quantPassageiros;
	this->passageiro = passageiro;
}

Onibus::~Onibus(){												//Destrutor
	delete [] passageiroNomes;
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

void Onibus::addPassageiro(const string &passageiro) {					//Alocação dinâmica

	string *aux = new string[quantPassageiros];

	for (int i = 0; i < quantPassageiros; i++)
		aux[i] = passageiroNomes[i];

	delete [] passageiroNomes;

	passageiroNomes = new string[++quantPassageiros];

	for (int i = 0; i < quantPassageiros - 1; i++)
		passageiroNomes[quantPassageiros - 1] = passageiro;

	delete [] aux;
}

ostream &operator << (ostream &output, const Onibus &onibus){	//sobrecarga de operadores <<
	output << " | Aberto: " << onibus.aberto
		<< " | Linha: " << onibus.linha
		<< " | Quantidade de passageiros: " << onibus.quantPassageiros
		<< " | Passageiro: " << onibus.passageiro << '\n';
}

const Onibus &Onibus::operator = (const Onibus &onibus){		//sobrecarga de operadores =
    this->aberto = onibus.aberto;
	this->linha = onibus.linha;
	this->quantPassageiros = onibus.quantPassageiros;
	this->passageiro = onibus.passageiro;
	this->passageiroNomes = onibus.passageiroNomes;
}

bool Onibus::operator== (const Onibus &onibus) const{			//sobrecarga de operadores ==
	if (this->aberto == onibus.aberto)
		return false;
	if (this->linha == onibus.linha)
		return false;
	if (this->quantPassageiros == onibus.quantPassageiros)
		return false;
	if (this->passageiro == onibus.passageiro)
		return false;
	if (this->passageiroNomes == onibus.passageiroNomes)
		return false;
			
	return true;
}
