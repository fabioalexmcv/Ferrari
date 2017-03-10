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
}

Moto::Moto(const Moto &moto){									//Construtor de cópia
//:Veiculo(static_cast< Veiculo >(moto)){
	this->ligado = moto.ligado;
	this->rotacaoMotor = moto.rotacaoMotor;
}

Moto::Moto(bool ligado, int rotacaoMotor, const Data &dataFab)						//Construtor
:Veiculo(velocidade, cor, quantRodas, capacidade, dataFab){
	this->ligado = ligado;
	this->rotacaoMotor = rotacaoMotor;
}

Moto::~Moto(){													//Destrutor
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

ostream &operator << (ostream &output, const Moto &moto){       //sobrecarga de operadores <<
    output 	<< " | Ligado: " << moto.ligado 
			<< " | Rotação: " << moto.rotacaoMotor << '\n';
}

const Moto &Moto::operator = (const Moto &moto){				//sobrecarga de operadores =
    this->ligado = moto.ligado;
	this->rotacaoMotor = moto.rotacaoMotor;
}

bool Moto::operator== (const Moto &moto) const{					//sobrecarga de operadores ==
	if (this->ligado == moto.ligado)
		return false;
	if (this->rotacaoMotor == moto.rotacaoMotor)
		return false;

	return true;
}