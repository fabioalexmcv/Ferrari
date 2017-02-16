#ifndef FERRARI_H
#define FERRARI_H
#include <string>
#include <ostream>
#include "Data.h"
#include "Data.cpp"
#include "Motor.h"
#include "Motor.cpp"
#include "Carro.h"
#include "Carro.cpp"
#include "Veiculo.h"
#include "Veiculo.cpp"
using std::string;
using std::ostream;

class Ferrari : public Carro{
    
public:

    Ferrari();
    Ferrari(const Ferrari &);
    Ferrari(int, int, const string &);
    ~Ferrari();
	
	void addSoftware(const string &);
    void mostraId() const;
        
    //void listarUsuarios() const;
    //void cadastrarUsuario(const string &, const int);
	
	friend ostream &operator << (ostream &, const Ferrari &);        //Sobrecarga de operadores <<
    
    const Ferrari &operator = (const Ferrari &);         //Sobrecarga de operadores =
    
private:

    int idFer;
    int quantSoftwares;
    const string software;
    string *softwareNomes;
    static int numeroFerraris;
    const static int VelocidadeMaxima;
    const static int sizeId = 10;
    int id[sizeId];
    
    Motor *motor;
    
};

#endif // FERRARI_H
 