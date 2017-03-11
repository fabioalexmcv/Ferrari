#ifndef VEICULO_H
#define VEICULO_H
#include <ostream>
#include <string>
#include "Data.h"
using std::ostream;
using std::string;

class Veiculo{
	//Operador <<
	friend ostream &operator<< (ostream &, const Veiculo &);
	
public:

	Veiculo();
	Veiculo(const Veiculo &);
	Veiculo(int velocidade, const string &cor, int quantRodas, int capacidade, const Data &data);
	virtual ~Veiculo();
	
	//Métodos virtuais puros
	virtual void informarQuantRodas() = 0;
	virtual void informarCapacidade() = 0;
	virtual void mostrarVelocidade() = 0;
	
	//Operadores ==, = e !=
	const Veiculo &operator= (const Veiculo &);
	bool operator== (const Veiculo &) const;
	bool operator!= (const Veiculo &veiculo) const
	{
		return ! (*this == veiculo);
	}

	
protected:

	int velocidade;
	string cor;
	int quantRodas;
	int capacidade;
	Data dataFab;
	
};

#endif // VEICULO_H
