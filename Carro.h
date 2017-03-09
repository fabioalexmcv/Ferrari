#ifndef CARRO_H
#define CARRO_H
#include <string>
#include <ostream>
#include "Motor.h"
#include "Data.h"
#include "Veiculo.h"
using std::string;
using std::ostream;

class Carro : public Veiculo{
	
	friend ostream &operator << (ostream &, const Carro &);
	
public:

	Carro();
	Carro(const Carro &);
	Carro(bool, const string &);
	virtual ~Carro();
	
	void informarQuantRodas();
	void informarCapacidade();
	void mostrarVelocidade();
	void ligarCarro();
	void mensagem() const;
	
	const Carro &operator = (const Carro &);
	bool operator== (const Carro &) const;
	bool operator!= (const Carro &carro) const
	{
		return ! (*this == carro);
	}

	
protected:

    bool ligado;
	string tamanho;
};

#endif // CARRO_H
