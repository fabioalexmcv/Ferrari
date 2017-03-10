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
	Moto(bool ligado, int rotacaoMotor);
	virtual ~Moto();
	
	void informarQuantRodas();
	void informarCapacidade();
	void mostrarVelocidade();
	void ligarMoto();
	int mostrarRotacaoMotor();
	void aumentarGiro(int);
	
	const Moto &operator = (const Moto &);
	bool operator== (const Moto &) const;
	bool operator!= (const Moto &moto) const
	{
		return ! (*this == moto);
	}

	
private:

    bool ligado;
	int rotacaoMotor;

};

#endif // MOTO_H