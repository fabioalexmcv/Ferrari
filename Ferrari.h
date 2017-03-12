#ifndef FERRARI_H
#define FERRARI_H
#include <string>
#include <ostream>
#include "Data.h"
#include "Motor.h"
#include "Carro.h"
//#include "Veiculo.h"
using std::string;
using std::ostream;

class Ferrari : public Carro{
	
	friend ostream &operator << (ostream &, const Ferrari &);        //Sobrecarga de operadores <<
    
public:

    Ferrari();
    Ferrari(const Ferrari &);
    Ferrari(int ligado, const string &tamanho, const Data &, const string &idFer, int quantSoftwares, const string &software);
    ~Ferrari();
	
    void addSoftwareFerrari(const string &);
    void mostraId();
        
    const Ferrari &operator = (const Ferrari &);        //Sobrecarga de operadores =
    bool operator== (const Ferrari &) const;			//Sobrecarga de operadores ==
    bool operator!= (const Ferrari &ferrari) const
    {
        return ! (*this == ferrari);
    }

    static int numeroFerraris;
    
protected:
	
    string idFer;
    int quantSoftwares;
    string software;
    string *softwareNomes;
		
    static const int VelocidadeMaxima;
    static const int sizeId;  
    
};

#endif // FERRARI_H
 
