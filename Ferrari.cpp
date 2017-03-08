#include "Ferrari.h"
#include "Data.h"
#include "Motor.h"
#include "Carro.h"
#include "Veiculo.h"
#include <iostream>
#include <string>
using std::cout;
using std::iostream;
using std::string;

int Ferrari::numeroFerraris = 0;            		//Static
const int Ferrari::VelocidadeMaxima = 300;          //Const e static

Ferrari::Ferrari(){                         		//Construtor vazio
    this->idFer = 0;
	this->quantSoftwares = 0;
	this->software = "";
    
    numeroFerraris++;
}

Ferrari::Ferrari(const Ferrari &p)
:Carro(static_cast< Carro >(p)){       			//Construtor de cópia
    this->idFer = p.idFer;
	this->quantSoftwares = p.quantSoftwares;
	this->software = p.software;
	
	
	numeroFerraris++;
}

Ferrari::Ferrari(int, int, const string &)
:Carro(ligado, velocidade, cor, quantRodas, capacidade){		//Construtor
	this->idFer[0] = idFer;
	this->quantSoftwares;
	this->software = software;
		
	numeroFerraris++;
}

Ferrari::~Ferrari(){                        		//Destrutor
    delete [] motor;
	delete [] softwareNomes;
	
	numeroFerraris--;
}

void Ferrari::mostraId() const{         //Array
    for (int i=0; i<sizeId; i++)
        cout << idFer[i] << '\t';
        
    cout << '\n';
}

void Ferrari::addSoftware(const string &software){
    
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
    this->software = ferrari.software;
	this->softwareNomes = ferrari.softwareNomes;
    
    static_cast< Carro >(*this) = static_cast< Carro > (ferrari);

}

bool Ferrari::operator== (const Ferrari &ferrari) const{
	if (this->idFer == ferrari.idFer)
		return false;
	if (this->software == ferrari.software)
		return false;
		if (this->softwareNomes == ferrari.softwareNomes)
		return false;
	if (static_cast< Carro >(*this) != static_cast< Carro > (ferrari))	
		return false;
			
	return true;
}