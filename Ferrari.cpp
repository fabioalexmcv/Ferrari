#include "Ferrari.h"
#include "Data.h"
#include "Data.cpp"
#include "Motor.h"
#include "Motor.cpp"
#include <iostream>
#include <string>
using std::cout;
using std::iostream;
using std::string;

int Ferrari::n = 0;            		//Static
const int Ferrari::VelocidadeMaxima = 300;          //Const e static

Ferrari::Ferrari(){                         //Construtor
    this->ligado = true;
    this->velocidade = 0;
    this->idFer = 0;
    this->cor = "";
	this->software = "";
    
    n++;
}

Ferrari::Ferrari(const Ferrari &p){         //Construtor de cópia
    this->ligado = p.ligado;
    this->velocidade = p.velocidade;
    this->idFer = p.idFer;
    this->cor = p.cor;
	
	n++;
}

Ferrari::Ferrari(const string &, const string &, int, int, bool){
    this->ligado = ligado;
    this->idFer = idFer;
    this->cor = cor;
    
	this->software = software;
    if (velocidade >= 0)
        this->velocidade = velocidade;
    else
        this->velocidade = 0;
    
	n++;
}

Ferrari::~Ferrari(){                        //Destrutor
    delete [] motor;
	
	n--;
}

ostream &operator << (ostream &output, const Ferrari &carro){       //sobrecarga de operadores <<
    output << "Velocidade: " << carro.velocidade << " | Id: " << carro.idFer << " | Cor: " << carro.cor << '\n';
}

const Ferrari &Ferrari::operator = (const Ferrari &carro){       //sobrecarga de operadores =
    this->ligado = carro.ligado;
    this->velocidade = carro.velocidade;
    this->idFer = carro.idFer;
    this->cor = carro.cor;
    this->software = carro.software;
    
    return *this;
}

void Ferrari::mensagem() const{
    cout << "Minha ferrari está a " << velocidade << "km/h, seu id é " << idFer << "e sua cor é " << cor << '\n';
}

void Ferrari::mostrarVelocidade(){
    cout << "Velocidade:" << velocidade << '\n';
}

void Ferrari::ligarCarro(){
    cout << "Status: " << ligado << '\n';
}

void Ferrari::mostraId(){         //Array
    for (int i=0; i<sizeId; i++)
        cout << id[i] << '\t';
        
    cout << '\n';
}

/*void Ferrari::cadastrarUsuario(const string &usuario, const int index){
    if (index >= 0 && index < quantUsuarios)
        usuarioNomes[index] = usuario;
    else
        cout << "Erro!\n";
}*/

void Ferrari::addSoftware(const string &software){
    
    string *aux = new string[quantSoftwares];
    
    for (int i = 0; i < quantSoftwares; i++)
        aux[i] = SoftwareNomes[i];
        
    delete [] SoftwareNomes;
    
    SoftwareNomes = new string[++quantSoftwares];
    
    for (int i = 0; i < quantSoftwares-1; i++)
        SoftwareNomes[quantSoftwares-1] = software;
        
    delete [] aux;
}
