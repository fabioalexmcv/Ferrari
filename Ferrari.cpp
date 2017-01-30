#include "Ferrari.h"
#include <iostream>
using std::cout;

int Ferrari::numeroFerraris = 0;            //Static

const double Ferrari::VelocidadeMaxima = 300;           //Const e static

Ferrari::Ferrari(){         //Construtor
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

Ferrari::~Ferrari(){            //Destrutor
    
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

int Data::checarDia(int dia) const{
    static const int diasPorMes[13]= {0,31,28,31,30,30,31,31,30,31,30,31};
    if (dia>0 && dia<=diasPorMes[mes])
        return dia;
        
    if (mes==2 && dia==29 && (ano % 400==0 || (ano % 4==0 && ano % 100!=0)))
        return dia;
        
    cout << "Dia inválido.\n";
    
    return 1;
}

 