#include <iostream>

#include "Lista.h"

Lista::Lista()
{
    pierwszy = nullptr;
    ostatni = nullptr;
    liczbaElementow = 0;
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
    liczbaElementow++;
}

void Lista::dodajNaKoniec(int wartosc)
{
    Element* nowy = new Element;
    nowy->wartosc = wartosc;
    nowy->poprzedni = ostatni;
    nowy->nastepny = nullptr;

    if (ostatni != nullptr)
    {
        ostatni->nastepny = nowy;
    }
    else
    {
        pierwszy = nowy;
    }

    ostatni = nowy; 
    liczbaElementow++;
}

void Lista::dodajPodIndex(int index, int wartosc)
{
	if (index < 0 || index > liczbaElementow)
	{
        std::cout << "indeks nieprawid³owy\n";
        return;
	}
    if (index == 0)
    {
        dodajNaPoczatek(wartosc);
        return;
    }
    if (index == liczbaElementow)
    {
        dodajNaKoniec(wartosc);
        return;
    }
	Element* nowy = new Element;
	nowy->wartosc = wartosc;
	Element* tmp = pierwszy;
    
	for (int i = 0; i < index - 1; i++)
	{
		tmp = tmp->nastepny;
	}
	nowy->nastepny = tmp->nastepny;
	nowy->poprzedni = tmp;
	tmp->nastepny->poprzedni = nowy;
	tmp->nastepny = nowy;
	liczbaElementow++;
}

void Lista::wyswietlListe()
{
    Element* elem = pierwszy;
	while (elem != nullptr)
	{
		std::cout << elem->wartosc << " ";
		elem = elem->nastepny;
	}
	std::cout << "\n";
}
