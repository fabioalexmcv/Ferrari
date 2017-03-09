#ifndef MOTOR_H
#define MOTOR_H
#include"Data.h"

class Motor
{
public:
    Motor();
    ~Motor();
    void mostrarPotencia() const;
    
private:
    float potencia;
	//Data dataFabricacao;	

};

#endif // MOTOR_H
