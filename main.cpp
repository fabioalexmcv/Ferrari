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

/*Lista de requisitos
3 construtores - incluindo um de cópia
2 métodos - não pode ser get ou set
1 método extra que precisa ser const
1 atributo static - inicializar no cpp
1 atributo static const - inicializar no cpp
1 método static - mostrar o seu uso no main
Composição com classe Data
1 array  - precisa ser realmente usado
*/