#include <string>
#include <ostream>
#include "Moto.h"
#include "Motor.h"
#include "Data.h"
#include "Veiculo.h"
using std::string;
using std::ostream;


Moto::Moto(){
	this->ligado = false;
	this->rotacaoMotor = 0;
}

Moto::Moto(const Moto &m){
//:Veiculo(static_cast< Veiculo >(m)){
	this->ligado = m.ligado;
	this->rotacaoMotor = m.rotacaoMotor;
}

Moto::Moto(bool, int)
:Veiculo(velocidade, cor, quantRodas, capacidade){
	this->ligado = ligado;
	this->rotacaoMotor = rotacaoMotor;
}

Moto::~Moto(){
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

int Moto::mostrarRotacaoMotor(){  //get
	return this->rotacaoMotor;
}

void Moto::aumentarGiro(int _rotacaoMotor){ //set
	rotacaoMotor = _rotacaoMotor;
}

ostream &operator << (ostream &output, const Moto &moto){       //sobrecarga de operadores <<
    output 	//<< static_cast< Veiculo > (moto)
			<< " | Ligado: " << moto.ligado 
			<< " | Rotação: " << moto.rotacaoMotor << '\n';
}

const Moto &Moto::operator = (const Moto &moto){       //sobrecarga de operadores =
    this->ligado = moto.ligado;
	this->rotacaoMotor = moto.rotacaoMotor;
    
    //static_cast< Veiculo >(*this) = static_cast< Veiculo > (moto);
}

bool Moto::operator== (const Moto &moto) const{
	if (this->ligado == moto.ligado)
		return false;
	if (this->rotacaoMotor == moto.rotacaoMotor)
		return false;
	/*if (static_cast< Veiculo >(*this) != static_cast< Veiculo > (moto))	
		return false;*/

	return true;
}