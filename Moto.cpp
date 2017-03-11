#include <string>
#include <iostream>
#include "Moto.h"
#include "Motor.h"
#include "Data.h"
#include "Veiculo.h"
using std::string;
using std::iostream;
using std::cout;


Moto::Moto(){													//Construtor default
	this->ligado = false;
	this->rotacaoMotor = 0;
	this->quantAcessorios = 0;
	this->acessorio = "";
}

Moto::Moto(const Moto &moto){									//Construtor de cópia
	this->ligado = moto.ligado;
	this->rotacaoMotor = moto.rotacaoMotor;
	this->quantAcessorios = moto.quantAcessorios;
	this->acessorio = moto.acessorio;
}

Moto::Moto(bool ligado, int rotacaoMotor, const Data &dataFab, int quantAcessorios, const string &acessorio, const string &motor)						//Construtor
:Veiculo(velocidade, cor, quantRodas, capacidade, dataFab, motor){
	this->ligado = ligado;
	this->rotacaoMotor = rotacaoMotor;
	this->quantAcessorios = quantAcessorios;
	this->acessorio = acessorio;

}

Moto::~Moto(){							//Destrutor
	delete [] acessorioNomes;
}

void Moto::informarQuantRodas(){
	quantRodas = 2;
	cout << "Quantidade de rodas: " << quantRodas << '\n';
}

void Moto::informarCapacidade(){
	capacidade = 2;
	cout << "Capacidade de pessoas: " << capacidade << '\n';
}

void Moto::mostrarVelocidade(){
	velocidade = 100;
    cout << "Velocidade:" << velocidade << "Km/h.\n";
}

void Moto::ligarMoto(){
	cout << "A moto será ligada." << '\n';
	this->ligado = true;
}

int Moto::mostrarRotacaoMotor(){								//get
	return this->rotacaoMotor;
}

void Moto::aumentarGiro(int _rotacaoMotor){						//set
	rotacaoMotor = _rotacaoMotor;
}

void Moto::addAcessorio(const string &acessorio) {					//Alocação dinâmica

	string *aux = new string[quantAcessorios];

	for (int i = 0; i < quantAcessorios; i++)
		aux[i] = acessorioNomes[i];

	delete[] acessorioNomes;

	acessorioNomes = new string[++quantAcessorios];

	for (int i = 0; i < quantAcessorios - 1; i++)
		acessorioNomes[quantAcessorios - 1] = acessorio;

	delete[] aux;
}

ostream &operator << (ostream &output, const Moto &moto){       //sobrecarga de operadores <<
    output 	<< " | Ligado: " << moto.ligado 
			<< " | Rotação: " << moto.rotacaoMotor
			<< " | Quantidade de Acessórios: " << moto.quantAcessorios
			<< " | Software: " << moto.acessorio << '\n';
}

const Moto &Moto::operator = (const Moto &moto){				//sobrecarga de operadores =
    this->ligado = moto.ligado;
	this->rotacaoMotor = moto.rotacaoMotor;
	this->quantAcessorios = moto.quantAcessorios;
	this->acessorio = moto.acessorio;
	this->acessorioNomes = moto.acessorioNomes;
}

bool Moto::operator== (const Moto &moto) const{					//sobrecarga de operadores ==
	if (this->ligado == moto.ligado)
		return false;
	if (this->rotacaoMotor == moto.rotacaoMotor)
		return false;
	if (this->quantAcessorios == moto.quantAcessorios)
		return false;
	if (this->acessorio == moto.acessorio)
		return false;
	if (this->acessorioNomes == moto.acessorioNomes)
		return false;

	return true;
}