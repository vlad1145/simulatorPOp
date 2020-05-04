#include <iostream>
#include"projekt.h"
using namespace std;

int main()
{
    int wysokosc=35;
    int szerokosc=35;
    char pole[35][35];
   for(int i=0; i<wysokosc;i++)
 {
 	for(int j=0; j<szerokosc;j++)
	 {
	 	pole[j][i]='p';
	 }
 }
for(int i=0; i<=szerokosc; i++)
	  {
	  	cout<<"--";
	  }

	  for(int i=0; i<wysokosc; i++)
	  {
	  	cout<<endl<<"|";             //lewa ramka
	  	for(int j=0; j<szerokosc; j++)
		  {
		if(pole[j][i]=='p')
			  cout<<"  ";
		  }


	  	cout<<"|";               //prawa ramka


	  }
	  cout<<endl;

	   for(int i=0; i<=szerokosc; i++)
	  {
	  	cout<<"--";
	  }


	  return 0;
 }
