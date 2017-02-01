#include "Ferrari.h"
#include <iostream>
#include <ostream>
using std::cout;
using std::ostream;

int Ferrari::numeroFerraris = 0;            //Static

const double Ferrari::VelocidadeMaxima = 300;           //Const e static

Ferrari::Ferrari(){                         //Construtor
    this->ligado = true;
    this->velocidade = 0;
    this->idFer = 0;
    this->cor = "desconhecido";
    
    numeroFerraris++;
}

Ferrari::Ferrari(const Ferrari &p){         //Construtor de cópia
    ligado = p.ligado;
    velocidade = p.velocidade;
    idFer = p.idFer;
    cor = p.cor;
}

Ferrari::Ferrari(const string &cor, int velocidade, int idFer, bool ligado){
    this->ligado = ligado;
    
    if (velocidade >= 0)
        this->velocidade = velocidade;
    else
        this->velocidade = 0;
    
    this->idFer = idFer;
    
    this->cor = cor;
}

Ferrari::~Ferrari(){                        //Destrutor
    
}

ostream &operator << (ostream &output, const Ferrari &carro){       //sobrecarga de operadores <<
    output << "Velocidade: " << carro.velocidade << " | Id: " << idFer << " | Cor: " << cor << '\n';
}

const Ferrari &operator = (const Ferrari &carro){       //sobrecarga de operadores =
    this->ligado = carro.ligado;
    this->velocidade = carro.velocidade;
    this->idFer = carro.idFer;
    this->cor = carro.cor;
    this->software = carro.software;
    
    return *this;
    
}

Ferrari::mensagem() const{
    cout << "Minha ferrari está a " << velocidade << "km/h, seu id é " << idFer << "e sua cor é " << cor << '\n';
}

void Ferrari::mostrarVelocidade(){
    cout << "Velocidade:" << velocidade << '\n';
}

void Ferrari::ligarCarro(){
    cout << "Status: " << ligado << '\n';
}

/*void Ferrari::initId(){
    for (int i=0; i<sizeId; i++)
        id[i]=o;
}*/

void Ferrari::mostraId() const{         //Array
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
    
    SoftwaresNomes = new string[++quantSoftwares];
    
    for (int i = 0; i < quantSoftwares-1; i++)
        SoftwareNomes[quantSoftwares-1] = software;
        
    delete [] aux;
}
