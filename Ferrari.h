#ifndef FERRARI_H
#define FERRARI_H

class Ferrari
{
public:
    Ferrari();
    ~Ferrari();
    
    void mostrarVelocidade();
    void ligarCarro();
    
private:

    int velocidade;
    bool ligado;

};

#endif // FERRARI_H
