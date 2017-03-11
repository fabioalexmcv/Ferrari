#ifndef MOTOR_H
#define MOTOR_H
#include "Veiculo.h"
#include "Carro.h"
#include "Moto.h"
#include "Onibus.h"

class Motor
{
public:
	Motor();
    Motor(float potencia);
	Motor(const Motor &);
    virtual ~Motor();

    double mostrarPotencia();
    
protected:
    float potencia;
};

#endif // MOTOR_H
