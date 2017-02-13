#ifndef FERRARI_H
#define FERRARI_H
#include <string>
#include <ostream>
#include "Motor.h"
using std::string;
using std::ostream;

class Ferrari{
    
public:

    Ferrari();
    Ferrari(const Ferrari &);
    Ferrari(const string &, const string &, int, int, bool);
    ~Ferrari();
	
    void mostrarVelocidade();
	void mostraId();
    void ligarCarro();
    void mensagem() const;
    void addSoftware(const string &);
    //void listarUsuarios() const;
    //void cadastrarUsuario(const string &, const int);
	
	friend ostream &operator << (ostream &, const Ferrari &);        //Sobrecarga de operadores <<
    
    const Ferrari &operator = (const Ferrari &);         //Sobrecarga de operadores =
    
private:

    bool ligado;
    int velocidade;
    int idFer;
    int quantSoftwares;
    string cor;
    string software;
    string *softwareNomes;
    static int numeroFerraris;
    const static int VelocidadeMaxima;
    const static int sizeId = 10;
    int id[sizeId];
    
    Motor *motor;
    
};

#endif // FERRARI_H
 