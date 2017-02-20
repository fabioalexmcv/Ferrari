#ifndef CARRO_H
#define CARRO_H
#include <string>
#include <ostream>
#include "Motor.h"
#include "Data.h"
#include "Veiculo.h"
#include "Veiculo.cpp"
using std::string;
using std::ostream;

class Carro : public Veiculo{
	
	friend ostream &operator << (ostream &, const Carro &);
	
public:

	Carro();
	Carro(const Carro &);
	Carro(bool);
	virtual ~Carro();
	
	void mostrarVelocidade() const;
	void ligarCarro() const;
	void mensagem() const;
	
	const Carro &operator = (const Carro &);
	bool operator== (const Carro &) const;
	bool operator!= (const Carro &carro) const
	{
		return ! (*this == carro);
	}

	
private:

    bool ligado;
};

#endif // CARRO_H
