#ifndef ONIBUS_H
#define ONIBUS_H
#include <string>
#include <ostream>
#include "Motor.h"
#include "Data.h"
#include "Veiculo.h"
using std::string;
using std::ostream;

class Onibus : public Veiculo{
	
	friend ostream &operator << (ostream &, const Onibus &);
	
public:

	Onibus();
	Onibus(const Onibus &);
	Onibus(bool aberto, const string &linha, const Data &, int quantPassageiros, const string &passageiro);
	virtual ~Onibus();
	
	void informarQuantRodas();
	void informarCapacidade();
	void mostrarVelocidade();
	void abrirPorta();
	void mostrarLinha();
	void addPassageiro(const string &);
	
	const Onibus &operator = (const Onibus &);
	bool operator== (const Onibus &) const;
	bool operator!= (const Onibus &onibus) const
	{
		return ! (*this == onibus);
	}

private:
	
	bool aberto;
	string linha;
	int quantPassageiros;
	string passageiro;
	string *passageiroNomes;

};

#endif // ONIBUS_H
