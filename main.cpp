#include <stdio.h>
#include <iostream>
#include "Ferrari.h"
#include "Ferrari.cpp"
using std::cout;

int main(int argc, char **argv){
    
    Ferrari carro1;
    carro1.mostrarVelocidade();         //Mostra só a velocidade
    carro1.ligado();                    //Informa se o carro está ligado
    carro1.mensagem();                  //Dá informações completas(
    
	cout << "hello world\n";
	return 0;
}
