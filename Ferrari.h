#ifndef FERRARI_H
#define FERRARI_H
#ifndef DATA_H_
#define DATA_H_

class Data{
public:
    Data(int=1, int=1, int=1900);
    void print() const;
    ~Data();
    
private:
    int checarDia(int) const;
    int dia;
    int mes;
    int ano;
}

class Ferrari{
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
    
    const static int sizeId = 10;
    
    int id[sizeId];
    
};

#endif // FERRARI_H
 