#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int=1, int=1, int=1);
    
    void print() const;
    
    ~Data();
    
private:
    
    int checarDia(int) const;
    
    int dia;
    
    int mes;
    
    int ano;

};

#endif // DATA_H
