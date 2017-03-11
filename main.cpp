#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "Ferrari.h"
#include "Data.h"
#include "Motor.h"
#include "Carro.h"
#include "Moto.h"
#include "Onibus.h"
#include "Veiculo.h"
using std::cout;
using std::iostream;
using std::string;
using std::vector;

int main(){
	
    vector <Veiculo*> veiculos(3);

    Carro carro(false, "medio", "02/08/2008", 4, "XT402", "Turbo 2.0");
    Moto moto(false, 700, "11/02/2011", 1, "led", "Turbo 1.5" );
    Onibus onibus(false,"A", "14/06/2000", 15, "João", "Turbo 1.6");
	
	carro.mostrarVelocidade();
	carro.informarCapacidade();
	
	moto.informarQuantRodas();
	moto.mostrarRotacaoMotor();
	
	onibus.mostrarLinha();
	onibus.informarCapacidade();
	
	for (size_t i = 0; i < veiculos.size(); i++){
		
		Moto *derivedPtr = dynamic_cast<Moto*> (veiculos[i]);
        if (derivedPtr != 0){
			int rotacaoMotor = derivedPtr->mostrarRotacaoMotor();
			cout << rotacaoMotor << '\n';
			derivedPtr->aumentarGiro(10 * rotacaoMotor);
			cout << "Rotacao: " << derivedPtr->mostrarRotacaoMotor() << '\n';                     
		} 
	}
	
	for (size_t j = 0; j < veiculos.size(); j++){
		cout << "Deletando objetos... " << typeid(*veiculos[j]).name() << '\n';
		delete veiculos[j];
    }
	
 	return 0;
}