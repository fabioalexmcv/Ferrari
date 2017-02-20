#ifndef FERRARI_H
#define FERRARI_H
#include <string>
#include <ostream>
#include "Data.h"
#include "Motor.h"
#include "Carro.h"
#include "Veiculo.h"
using std::string;
using std::ostream;

class Ferrari : public Carro{
	
	friend ostream &operator << (ostream &, const Ferrari &);        //Sobrecarga de operadores <<
    
public:

    Ferrari();
    Ferrari(const Ferrari &);
    Ferrari(int, int, const string &);
    ~Ferrari();
	
	void addSoftware(const string &);
    void mostraId() const;
        
    const Ferrari &operator = (const Ferrari &);        //Sobrecarga de operadores =
	bool operator== (const Ferrari &) const;			//Sobrecarga de operadores ==
	bool operator!= (const Ferrari &carro) const
	{
		return ! (*this == carro);
	}

    
private:

    int idFer[sizeId];
    int quantSoftwares;
    const string software;
    string *softwareNomes;
    static int numeroFerraris;
    const static int VelocidadeMaxima;
    const static int sizeId = 10;
        
    Motor *motor;
    
};

#endif // FERRARI_H
 