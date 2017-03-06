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

Moto::Moto(const Moto &m)
:Veiculo(static_cast< Veiculo >(Veiculo)){
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

void Moto::informarQuantRodas() const{
	cout << "Quantidade de rodas: " << moto.quantRodas << '\n';
}

void Moto::informarCapacidade() const{
	cout << "Capacidade de pessoas: " << moto.capacidade << '\n';

void Moto::mostrarVelocidade() const{
    cout << "Velocidade:" << moto.velocidade << '\n';
}

void Moto::ligarMoto() const{
	cout << "A moto será ligada." << '\n';
	this->ligado = true;
}

void Moto::mostrarRotacaoMotor() const{
	cout << "Rotação: " << moto.rotacaoMotor << '\n';
}

ostream &operator << (ostream &output, const Moto &moto){       //sobrecarga de operadores <<
    output 	<< static_cast< Veiculo > (moto)
			<< " | Ligado: " << moto.ligado 
			<< " | Rotação: " << moto.rotacaoMotor << '\n';
}

const Moto &Moto::operator = (const Moto &moto){       //sobrecarga de operadores =
    this->ligado = moto.ligado;
	this->rotacaoMotor = moto.rotacaoMotor;
    
    static_cast< Veiculo >(*this) = static_cast< Veiculo > (moto);
}

bool Moto::operator== (const Moto &moto) const{
	if (this->ligado == moto.ligado)
		return false;
	if (this->rotacaoMotor == moto.rotacaoMotor)
		return false;
	if (static_cast< Veiculo >(*this) != static_cast< Veiculo > (moto))	
		return false;

	return true;
}