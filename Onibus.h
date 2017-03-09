#ifndef ONIBUS_H
#define ONIBUS_H
#include <string>
#include <ostream>
#include "Motor.h"
#include "Data.h"
#include "Veiculo.h"
#include "Veiculo.cpp"
using std::string;
using std::ostream;

class Onibus : public Veiculo{
	
	friend ostream &operator << (ostream &, const Onibus &);
	
public:

	Onibus();
	Onibus(const Onibus &);
	Onibus(bool, const string &);
	virtual ~Onibus();
	
	void informarQuantRodas();
	void informarCapacidade();
	void mostrarVelocidade();
	void abrirPorta();
	void mostrarLinha();
	
	const Onibus &operator = (const Onibus &);
	bool operator== (const Onibus &) const;
	bool operator!= (const Onibus &onibus) const
	{
		return ! (*this == onibus);
	}

private:
	
	bool aberto;
	string linha;


};

#endif // ONIBUS_H
