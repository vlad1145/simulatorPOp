#include <iostream>
#include<conio.h> //getch()
#include<cstdlib> //system cls
#include<time.h>
#include<windows.h>
#include<stdio.h>
#include"projekt.h"

using namespace std;

int pozywienie;
int trucizna;
int polee;
char organizm;
int energia_p;
char metanol=109;
char etanol=101;
char woda=119;
char tlen=116;
char glukoza=103;
char dwutlenek_wegla=100;

bool zdolnosc_ruchu=true;
int energia;
int minimalna_energia_do_podzialu;

class Samozywne;
class Cudzozywne;
class Reducenci;


void nieZnika(int x, int y)
{
	HANDLE hCon;
	COORD dwPos;

	dwPos.X=x;
	dwPos.Y=y;

	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon, dwPos);
}

int Mikroby:: get_energia()
{

    if(polee==pozywienie)
    {
        energia++;
        pozywienie--;
    }
    else if(polee==trucizna)
    {
        energia--;
        trucizna--;
    }
return energia;
}

void Mikroby:: zbierz()
{
if(polee==pozywienie)
{
    get_energia();
}
}


void Mikroby:: przerobi()
{

}

void Mikroby:: podziel(int x)
{

}

void Mikroby:: skonaj()
{

}


