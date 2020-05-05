#include <iostream>
#include<conio.h> //getch()
#include<cstdlib> //system cls
#include<time.h>
#include<windows.h>
#include<stdio.h>
#include"projekt.h"

using namespace std;
char pole[35][35];
int pozywienie;
int trucizna;
int wspolrzednaX;
int wspolrzednaY;
int wysokosc;
int szerokosc;
int organizm;
int energia_p;

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

int Mikroby:: get_energia(int polee)
{

    if(polee==pozywienie)
    {
        energia++;
        pozywienie--;
        if(energia>=20)
        {
            energia=1;
            organizm++;
        }
    }
    else if(polee==trucizna)
    {
        energia-=10;//trucizna ma wartosc -10 energii 
        trucizna--;
        if(energia<=0)
        {
            organizm--;
        }
    }
return energia;
}

void Mikroby:: zbierz(int pozywienie, int trucizna)
{
zebrane_H20=pozywienie;
zebrane_CO2=pozywienie;
zebrana_glukoza=pozywienie;
zebrany_tlen=pozywienie;
zebrany_etanol=trucizna;
zebrany_metanol=trucizna;
if(polee==pozywienie)
{
    Mikroby:: get_energia(polee);
}
else if(polee==trucizna)
{
    Mikroby::get_energia(polee);
}
}


void Mikroby:: przerob()
{

}

void Mikroby:: podziel(int x)
{

if(energia==x*energia_p)
{
do {
 wspolrzednaX=rand()%szerokosc;
 wspolrzednaY=rand()%wysokosc;
 } while((pole[wspolrzednaX][wspolrzednaY]!=trucizna)&&(pole[wspolrzednaX][wspolrzednaY]!=pozywienie)&&(pole[wspolrzednaX][wspolrzednaY]!=organizm));
}
}

void Mikroby:: skonaj()
{
if(energia<=0)
{
organizm--;
}
else if(energia>=20)
{
    organizm ++;
}
return organizm;
}

void Samozywne::odtruj()
{
if((energia>0)&&(polee==pozywienie))
{
    energia++;
    if(energia>=20)
    {
        energia=0;
        organizm++;
    }
}
}

void Cudzozywne::odtruj()
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

