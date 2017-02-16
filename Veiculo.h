#ifndef VEICULO_H
#define VEICULO_H

class Veiculo{

	friend ostream &operator << (ostream &, const Veiculo &);
	
public:

	Veiculo();
	Veiculo(const Veiculo &);
	Veiculo(int, const string  &, int, int);
	~Veiculo();
	
	void informarQuantRodas() const;
	void informarCapacidade() const;
	
	const Veiculo &operator = (const Veiculo &);
	
private:

	int velocidade;
	const string cor;
	int quantRodas;
	int capacidade;
	
};

#endif // VEICULO_H
