#include "Ferrari.h"
#include "Data.h"
#include "Motor.h"
#include "Carro.h"
//#include "Veiculo.h"
#include <iostream>
#include <string>
using std::cout;
using std::iostream;
using std::string;

int Ferrari::numeroFerraris = 0;            		//Static
const int Ferrari::VelocidadeMaxima = 300;			//Static const
const int Ferrari::sizeId = 5;						//Static const

Ferrari::Ferrari(){                         		//Construtor default
    this->idFer = "";
	this->quantSoftwares = 0;
	this->software = "";
    
    numeroFerraris++;
}

Ferrari::Ferrari(const Ferrari &p)
:Carro(static_cast< Carro >(p)){       				//Construtor de cópia
    this->idFer = p.idFer;
	this->quantSoftwares = p.quantSoftwares;
	this->software = p.software;
	
	numeroFerraris++;
}

Ferrari::Ferrari(int ligado, const string &tamanho, const Data &dataFab, const string &idFer, int quantSoftwares, const string &software)
:Carro(ligado, tamanho, dataFab){							//Construtor
	this->idFer = idFer;
	this->quantSoftwares = quantSoftwares;
	this->software = software;
		
	numeroFerraris++;
}

Ferrari::~Ferrari(){                        		//Destrutor
	delete [] motor;
	delete [] softwareNomes;
	
	numeroFerraris--;
}

void Ferrari::mostraId(){         //Array
    for (int i=0; i<sizeId; i++)
        cout << this->idFer[i] << '\t';
        
    cout << '\n';
}

void Ferrari::addSoftwareFerrari(const string &software){					//Alocação dinâmica
    
    string *aux = new string[quantSoftwares];
    
    for (int i = 0; i < quantSoftwares; i++)
        aux[i] = softwareNomes[i];
        
    delete [] softwareNomes;
    
    softwareNomes = new string[++quantSoftwares];
    
    for (int i = 0; i < quantSoftwares-1; i++)
        softwareNomes[quantSoftwares-1] = software;
        
    delete [] aux;
}

ostream &operator << (ostream &output, const Ferrari &ferrari){       //sobrecarga de operadores <<
    output 	<< static_cast< Carro > (ferrari)
			<< " | Id: " << ferrari.idFer
			<< " | Quantidade de Softwares: " <<ferrari.quantSoftwares
			<< " | Software: " << ferrari.software << '\n';
}

const Ferrari &Ferrari::operator = (const Ferrari &ferrari){       //sobrecarga de operadores =
    this->idFer = ferrari.idFer;
	this->quantSoftwares = ferrari.quantSoftwares;
    this->software = ferrari.software;
	this->softwareNomes = ferrari.softwareNomes;
    
    static_cast< Carro >(*this) = static_cast< Carro > (ferrari);
}

bool Ferrari::operator== (const Ferrari &ferrari) const{
	if (this->idFer == ferrari.idFer)
		return false;
	if (this->quantSoftwares == ferrari.quantSoftwares)
		return false;
	if (this->software == ferrari.software)
		return false;
		if (this->softwareNomes == ferrari.softwareNomes)
		return false;
	if (static_cast< Carro >(*this) != static_cast< Carro > (ferrari))	
		return false;
	
	return true;
}
