#ifndef MOTO_H
#define MOTO_H
#include <string>
#include <ostream>
#include "Motor.h"
#include "Data.h"
#include "Veiculo.h"
using std::string;
using std::ostream;

class Moto : public Veiculo{
	
	friend ostream &operator << (ostream &, const Moto &);
	
public:

	Moto();
	Moto(const Moto &);
	Moto(bool ligado, int rotacaoMotor, const Data &, int quantAcessorios, const string &acessorio, const string &motor);
	virtual ~Moto();
	
	void informarQuantRodas();
	void informarCapacidade();
	void mostrarVelocidade();
	void ligarMoto();
	int mostrarRotacaoMotor();
	void aumentarGiro(int);
	void addAcessorio(const string &);
	
	const Moto &operator = (const Moto &);
	bool operator== (const Moto &) const;
	bool operator!= (const Moto &moto) const
	{
		return ! (*this == moto);
	}

	
private:

    bool ligado;
	int rotacaoMotor;
	int quantAcessorios;
	string acessorio;
	string *acessorioNomes;

};

#endif // MOTO_H