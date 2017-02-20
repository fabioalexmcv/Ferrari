#ifndef DATA_H
#define DATA_H

class Data{
	
	friend ostream &operator<<(ostream &, const Data &);
public:
	const Data &operator=(const Data &);
	bool operator== (const Data &) const;

	Data();
    Data(int=1, int=1, int=1900);
	Data(const Data &);
    ~Data();
    void print() const;
	
private:

    int checarDia(int) const;
    int dia;
    int mes;
    int ano;

};

#endif // DATA_H
