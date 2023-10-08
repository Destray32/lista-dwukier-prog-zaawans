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

void Lista::usunZPoczatku()
{
	if (liczbaElementow == 0)
	{
		std::cout << "lista jest pusta\n";
		return;
	}
	Element* tmp = pierwszy;
	pierwszy = pierwszy->nastepny;
    if (pierwszy != nullptr)
    {
        pierwszy->poprzedni = nullptr;
    }
    else
    {
        ostatni = nullptr;
    }
    delete tmp;
	liczbaElementow--;
}

void Lista::usunZKonca()
{
	if (liczbaElementow == 0)
	{
		std::cout << "lista jest pusta\n";
		return;
	}
	
	Element* tmp = ostatni;
    ostatni = tmp->poprzedni;
    if (ostatni != nullptr)
    {
        ostatni->nastepny = nullptr;
    }
    else
    {
        pierwszy = nullptr;
    }
    delete tmp;
	liczbaElementow--;
}


void Lista::usunIndeks(int index)
{
	if (index < 0 || index >= liczbaElementow)
	{
		std::cout << "indeks nieprawid³owy\n";
		return;
	}
	if (index == 0)
	{
		usunZPoczatku();
		return;
	}
	if (index == liczbaElementow - 1)
	{
		usunZKonca();
		return;
	}
	Element* tmp = pierwszy;
	for (int i = 0; i < index - 1; i++)
	{
		tmp = tmp->nastepny;
	}
	Element* tmp2 = tmp->nastepny;
	tmp->nastepny = tmp2->nastepny;
	tmp2->nastepny->poprzedni = tmp;
	delete tmp2;
	liczbaElementow--;
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

void Lista::wyswietlListeOdTylu()
{
	Element* elem = ostatni;
	while (elem != nullptr)
	{
		std::cout << elem->wartosc << " ";
        elem = elem->poprzedni;
	}
	std::cout << "\n";
}

void Lista::wyswietlNastepny(int index)
{
	if (liczbaElementow == 0)
	{
		std::cout << "lista jest pusta\n";
		return;
	}
	
	Element* tmp = pierwszy;
	for (int i = 0; i < index; i++)
	{
		tmp = tmp->nastepny;
	}
	if (tmp->nastepny == nullptr)
	{
		std::cout << "nie ma nastêpnego elementu\n";
		return;
	}
	std::cout << tmp->nastepny->wartosc << "\n";
}

void Lista::wyswietlPoprzedni(int index)
{
	if (liczbaElementow == 0)
	{
		std::cout << "lista jest pusta\n";
		return;
	}

	Element* tmp = pierwszy;
	for (int i = 0; i < index; i++)
	{
		tmp = tmp->nastepny;
	}
	if (tmp->poprzedni == nullptr)
	{
		std::cout << "nie ma poprzedniego elementu\n";
		return;
	}
	std::cout << tmp->poprzedni->wartosc << "\n";
}

void Lista::wyczyscListe()
{
	Element* tmp = pierwszy;
	while (tmp != nullptr)
	{
		Element* tmp2 = tmp;
		tmp = tmp->nastepny;
		delete tmp2;
	}
	pierwszy = nullptr;
	ostatni = nullptr;
	liczbaElementow = 0;
}
