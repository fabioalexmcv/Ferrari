#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Ferrari.h"
#include "Data.h"
#include "Motor.h"
#include "Carro.h"
#include "Moto.h"
using std::cout;
using std::string;
using std::vector;

int main(int velocidade, const string &mensagem, const string &cor){
    
    Ferrari carro1, carro3(carro1);
    
    carro1.mostrarVelocidade();         //Mostra só a velocidade do carro1
    carro1.mensagem();                  //Dá informações completas do carro1
    carro3.mensagem();                  //Dá informações completas do carro3
    
    const Ferrari carro4("preta", "FTX4.1", 260, {3}, true);
    
	cout << "Número de ferraris: " << Ferrari::numeroFerraris << '\n';
    cout << "Esse veículo tem velocidade, id e cor, respectivamente:\n";
    cout << carro1 << '\n';
	
	Veiculo *Derivada = new Carro();
	delete Derivada;
	Veiculo *Derivada = new Moto();
    
	//Polimorfismo
	Carro carro;
	Moto moto;
	
	mostrarVelocidadeVeiculo(&carro);
	mostrarVelocidadeVeiculo(&moto);
	
	delete carro;
	delete moto;
	
	//Um atributo do tipo vector< > em um das classes
	vector <Veiculo*> veiculos(2);

    veiculos[0] = new Carro(ligado);
    veiculos[1] = new Moto(ligado, 30);
	
	//Usar o dynamic_cast uma da classe e fazer uma operação específica a essa classe
    for (size_t i = 0; i < veiculos.size(); i++) {
		Carro *derivedPtr = dynamic_cast<Carro*> (veiculos[i]);
        if (derivedPtr != 0){
			Veiculo.ligado(*derivedPtr, false);
			cout << "O veículo está sendo desligado!\n";                         
		}
	}
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