#ifndef VEICULO_H
#define VEICULO_H
#include <ostream>
#include <string>
using std::ostream;
using std::string;

class Veiculo{

	friend ostream &operator << (ostream &, const Veiculo &);
	
public:

	Veiculo();
	Veiculo(const Veiculo &);
	Veiculo(int, const string  &, int, int);
	virtual ~Veiculo();
	
	void informarQuantRodas() const;
	void informarCapacidade() const;
	
	const Veiculo &operator = (const Veiculo &);
	bool operator== (const Veiculo &) const;
	bool operator!= (const Veiculo &veiculo) const
	{
		return ! (*this == veiculo);
	}

	
private:

	int velocidade;
	string cor;
	int quantRodas;
	int capacidade;
	
};

#endif // VEICULO_H
