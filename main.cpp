#include <stdio.h>
#include <iostream>
#include <string>
#include "Ferrari.h"
#include "Ferrari.cpp"
#include "Data.h"
#include "Data.cpp"
#include "Motor.h"
#include "Motor.cpp"
#include "Carro.h"
#include "Carro.cpp"
//#pragma once
using std::cout;
using std::string;

int main(int velocidade, const string &mensagem, const string &cor){
    
    Ferrari carro1, carro3(carro1);
    
    carro1.mostrarVelocidade();         //Mostra só a velocidade do carro1
    carro1.mensagem();                  //Dá informações completas do carro1
    carro3.mensagem();                  //Dá informações completas do carro3
    
    const Ferrari carro4("preta", "FTX4.1", 260, {3}, true);
    
	cout << "Número de ferraris: " << Ferrari::n << '\n';
    
	//Usando a sobrecarga de operadores
    Ferrari veiculo;
    
    cout << "Esse veículo tem velocidade, id e cor, respectivamente:\n";
    cout << carro1 << '\n';
    
    return 0;
}

/*Lista de requisitos
1 nova classe relacionada ao seu projeto
2 alocações dinâmicas de memória - uma similar ao do exemplo do livro - slide 85
Uso explicito do ponteiro this
Uso do destrutor
Sobrecarga dos operadores
= (atribuição)
==
~=

3 construtores - incluindo um de cópia
2 métodos - não pode ser get ou set
1 método extra que precisa ser const
1 atributo static - inicializar no cpp
1 atributo static const - inicializar no cpp
1 método static - mostrar o seu uso no main
Composição com classe Data
1 array  - precisa ser realmente usado
*/