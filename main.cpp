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

    Carro carro(false, "medio");
    Moto moto(false, 700);
    Onibus onibus(false,"A");
	
	carro.mostrarVelocidade();
	carro.informarCapacidade();
	
	moto.informarQuantRodas();
	moto.mostrarRotacaoMotor();
	
	onibus.mostrarLinha();
	onibus.informarCapacidade();
	
	/*delete carro;
	delete moto;
	delete onibus;*/
	
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
		cout << "Deletando objetos... " << typeid(*veiculos[j]).name() << '\n';
		delete veiculos[j];
    }
	
 	return 0;
}