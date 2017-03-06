#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Ferrari.h"
#include "Data.h"
#include "Motor.h"
#include "Carro.h"
#include "Moto.h"
#include "Onibus.h"
#include "Veiculo.h"
using std::cout;
using std::string;
using std::vector;

int main(int velocidade, const string &mensagem, const string &cor){
    
    Ferrari carro1, carro3(carro1);
    
   	cout << "Numero de ferraris: " << Ferrari::numeroFerraris << '\n';
	
	Veiculo *Derivada = new Carro();
	delete Derivada;
	Veiculo *Derivada = new Moto();
    delete Derivada;
	Veiculo *Derivada = new Onibus();
		
	//Polimorfismo
	Carro carro;
	Moto moto;
	Onibus onibus;
	
	mostrarVelocidadeVeiculo(&carro);
	mostrarVelocidadeVeiculo(&moto);
	mostrarVelocidadeVeiculo(&onibus);
	
	delete carro;
	delete moto;
	delete onibus;
	
	//Um atributo do tipo vector< > em um das classes
	vector <Veiculo*> veiculos(3);

    veiculos[0] = new Carro(false);
    veiculos[1] = new Moto(false, 30);
    veiculos[2] = new Onibus(false,"A")
	
	for (size_t i = 0; i < veiculos.size(); i++){
		Carro *derivedPtr = dynamic_cast<Carro*> (veiculos[i]);
        if (derivedPtr != 0){
			Veiculo.ligado(*derivedPtr, false);
			cout << "O veiculo esta sendo desligado!\n";                      
		}
	}
	
	for ( size_t j = 0; j < veiculos.size(); j++ ){
		cout << "deleting object of " << typeid(*veiculos[j]) << endl;
		delete veiculos[j];
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
