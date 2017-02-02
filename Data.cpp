#include "Data.h"

Data::Data(){
	this->dia = 1; 
    this->mes = 1;
    this->ano = 1900;
}

Data(const Data &copia){
	this->dia = copia.dia;
    this->mes = copia.mes;
    this->ano = copia.ano;
}

Data::Data(int d, int m, int a){
    if (m > 0 && m <= 12)
        mes = m;
    
    if (a < 0)
        ano = 1900;
    else
        ano = a;
   
    dia = checarDia(d);
}

void Data::print() const{
   cout << dia << '/' << mes << '/' << ano;
}

Data::~Data(){
}

int Data::checarDia(int dia) const{
	
    static const int diasPorMes[13] = {0,31,28,31,30,30,31,31,30,31,30,31};
    
	if (dia > 0 && dia <= diasPorMes[mes])
        return dia;
        
    if (mes == 2 && dia == 29 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
        return dia;
        
    cout << "Dia inválido.\n";
    
    return 1;
}
