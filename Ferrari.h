#ifndef FERRARI_H
#define FERRARI_H

class Ferrari
{
public:
    Ferrari();
    ~Ferrari();
    Ferrari(const Ferrari &);
    Ferrari(const string &, int velocidade, int idFer, bool ligado);
    void mostrarVelocidade();
    void ligarCarro();
    void mensagem() const;
    
private:

    bool ligado;
    int velocidade;
    int idFer;
    string cor;
    
    static int numeroFerraris;
    
    const static double VelocidadeMaxima = 300;
    
};

#endif // FERRARI_H
