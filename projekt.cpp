#include <iostream>
#include<conio.h> //getch()
#include<cstdlib> //system cls
#include<time.h>
#include<windows.h>
#include<stdio.h>
#include"projekt.h"

#include"naglowki.h"

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
/////////////////////////////////////////////////////////////////////////////
int Samozywne::getH2O()
{
	if (polee==woda)//miejsce wody na planszy
		zebrane_H2O++;
	return zebrane_H2O;
}
int Samozywne::getCO2()
{
	if (polee==dwutlenek_wegla)//miejsce dwutlenku na planszy
		zebrane_CO2++;
	return zebrane_CO2;
}
int Samozywne::getZatrucie()
{
	if (polee==etanol || polee==metan) //miejsce etanolu lub metanu
		zatrucie++;
	return zatrucie;
}
int Samozywne::getMaxZatrucie()
{
	//przyjmijmy 
	maxymalne_zatrucie=10;
	if (zatrucie==maxymalne_zatrucie)
	{
		Mikroby::skonaj();
		zatrucie=0;
	}	
	return maxymalne_zatrucie;
}
void Samozywne::odtruj()
{
	if (polee==woda || pole==dwutlenek_wegla)
		zatrucie--;
}

/////////////////////////////

int Cudzozywne::getGlukoza()
{
	return zebrana_glukoza;
}
int Cudzozywne::getTlen()
{
	return zebrany_tlen;
}
int Cudzozywne::getZatrucie()
{
	return zatrucie;
}
int Cudzozywne::getMaxZatrucie()
{
	return maxymalne_zatrucie;
}
void Cudzozywne::odtruj()
{
	
}
//
int Reducenci::getEtanol()
{
	return zebrany_etanol;
}
int Reducenci::getMetan()
{
	return zebrany_metan;
}

