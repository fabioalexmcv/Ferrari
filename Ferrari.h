#ifndef FERRARI_H
#define FERRARI_H

class Ferrari{
    
public:

    Ferrari();
    
    ~Ferrari();
    
    Ferrari(const Ferrari &);
    
    Ferrari(const string &, int velocidade, int idFer, bool ligado);
    
    void mostrarVelocidade();
    
    void ligarCarro();
    
    void mensagem() const;
    
    //void cadastrarUsuario(const string &, const int);
    
    void addSoftware(const string &);
    
    void listarUsuarios() const;
    
    friend ostream &operator << (ostream &, const Ferrari &);        //Sobrecarga de operadores <<
    
    const Ferrari &operator = (const Ferrari &);         //Sobrecarga de operadores =
    
private:

    bool ligado;
    
    int velocidade;
    
    int idFer;
    
    string cor;
    
    string software;
    
    static int numeroFerraris;
    
    const static double VelocidadeMaxima = 300;
    
    const static int sizeId = 10;
    
    int id[sizeId];
    
};

#endif // FERRARI_H
 