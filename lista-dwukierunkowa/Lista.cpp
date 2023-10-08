#include "Lista.h"


Lista::Lista()
{
    pierwszy = nullptr;
    ostatni = nullptr;
}


Lista::~Lista()
{
    while (pierwszy != nullptr)
    {
        Element* tmp = pierwszy;
        pierwszy = pierwszy->nastepny;
        delete tmp;
    }
}


void Lista::dodajNaPoczatek(int wartosc)
{
    Element* nowy = new Element;
    nowy->wartosc = wartosc;
    nowy->nastepny = pierwszy;
    nowy->poprzedni = nullptr;
    if (pierwszy != nullptr)
    {
        pierwszy->poprzedni = nowy;
    }
    else
    {
        ostatni = nowy;
    }
    pierwszy = nowy;
}
