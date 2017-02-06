#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
public:
    Motor();
    ~Motor();
    void mostrarPotencia() const;
    
private:
    float potencia;

};

#endif // MOTOR_H
