#ifndef CARRO_H
#define CARRO_H
#include <string>
#include <ostream>
#include "Ferrari.h"
#include "Motor.h"
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
	~Carro();
	
	void mostrarVelocidade();
	void ligarCarro();
	void mensagem() const;
	
	const Ferrari &operator = (const Ferrari &);
	
private:

    bool ligado;
};

#endif // CARRO_H
