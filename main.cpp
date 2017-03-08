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

//Forma do slide polimorfismo
void mostrarVelocidadeVeiculo(const Veiculo &);

int main(int argc, char **argv){
    
	void mostrarVelocidadeVeiculo(const Veiculo &p){
		p.mostrarVelocidade();
	}
	
	vector <Veiculo*> veiculos(3);

    Carro carro(false, "medio");
    Moto moto(false, 700);
    Onibus onibus(false,"A");
	
	mostrarVelocidadeVeiculo(carro);
	mostrarVelocidadeVeiculo(moto);
	mostrarVelocidadeVeiculo(onibus);
	
	delete carro;
	delete moto;
	delete onibus;
	
	for (size_t i = 0; i < veiculos.size(); i++){
		
		Moto *derivedPtr = dynamic_cast<Moto*> (veiculos[i]);
        if (derivedPtr != 0){
			int rotacaoMotor = derivedPtr->mostrarRotacaoMotor();
			cout << rotacaoMotor << '\n';
			derivedPtr->aumentarGiro(10 * rotacaoMotor);
			cout << "Rotacao: " << derivedPtr->mostrarRotacaoMotor() << '\n';                     
		} //end if
	}
	
	for (size_t j = 0; j < veiculos.size(); j++){
		cout << "deleting object of " << typeid(*veiculos[j]) << endl;
		delete veiculos[j];
    }
	
 	return 0;
} 


	/*Forma do slide app
 	Veiculo *derivedPtr = new Carro();
	delete derivedPtr;
	Veiculo *derivedPtr = new Moto();
    delete derivedPtr;
	Veiculo *derivedPtr = new Onibus();
		
	//Polimorfismo
	Carro carro;
	Moto moto;
	Onibus onibus;
	
	vector <Veiculo*> veiculos(3);

    veiculos[0] = new Carro(false, "medio");
    veiculos[1] = new Moto(false, 700);
    veiculos[2] = new Onibus(false,"A")
	*/
      

