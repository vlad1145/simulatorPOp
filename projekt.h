#include<iostream>

using namespace std;

class Mikroby
{
protected:
    bool zdolnosc_ruchu;
    int energia;
    int min_energia_podzialu;

public:
    Mikroby(int energia, int min_energia_podzialu, char organizm);
    ~Mikroby();
    int get_energia();
    void zbierz();
    void przerobi();
    void podziel(int x);
    void skonaj();
};

class Samozywne : public Mikroby
{

};

class Cudzozywne : public Mikroby
{


};

class Reducenci : public Mikroby
{


};



void nieZnika(int x, int y);
