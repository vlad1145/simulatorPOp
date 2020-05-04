#include"naglowki.h"
using namespace std;
//pola i metody
int Mikroby::getEnergia()
{
	return energia;
}
void Mikroby::zbierz()
{
	
}
void Mikroby::przerob()
{
	
}
void Mikroby::podziel()
{
	
}
void Mikroby::skonaj()
{
	
}
///////////////////////////////
int Samozywne::getH2O()
{
	return zebrane_H2O;
}
int Samozywne::getCO2()
{
	return zebrane_CO2;
}
int Samozywne::getZatrucie()
{
	return zatrucie;
}
int Samozywne::getMaxZatrucie()
{
	return maxymalne_zatrucie;
}
void Samozywne::odtruj()
{
	
}
///////////////////////////////
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
///////////////////////////////
int Reducenci::getEtanol()
{
	return zebrany_etanol;
}
int Reducenci::getMetan()
{
	return zebrany_metan;
}
