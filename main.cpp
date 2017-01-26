#include <stdio.h>
#include <iostream>
#include "Ferrari.h"
#include "Ferrari.cpp"
using std::cout;

int main(int argc, char **argv){
    
    Ferrari carro1, carro2(120,1023,"vermelha"), carro3(carro2);
    carro1.mostrarVelocidade();         //Mostra só a velocidade do carro1
    carro1.cor();                       //Informa a cor do carro1
    carro1.mensagem();                  //Dá informações completas do carro1
    carro2.mensagem();                  //Dá informações completas do carro2
    carro3.mensagem();                  //Dá informações completas do carro3
    
    const Ferrari carro4(200,1030,"preta");
    
    cout << "Número de ferraris: " << carro4.getNumeroFerraris() << '\n';
    
	cout << "hello world\n";
	return 0;
}
