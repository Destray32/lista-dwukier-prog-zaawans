﻿#include <iostream>
#include "Lista.h"

int main()
{
    Lista lista;
    lista.dodajNaPoczatek(150);
    lista.dodajNaPoczatek(999);
    lista.dodajNaPoczatek(324);
    lista.dodajNaKoniec(1235);
    lista.dodajPodIndex(1, 4);
    lista.usunIndeks(1);
    lista.usunZKonca();
    lista.usunZPoczatku();
    lista.wyswietlListe();
    lista.wyswietlListeOdTylu();
    lista.wyswietlNastepny(0);
    lista.wyswietlPoprzedni(1);
    
    lista.wyczyscListe();
   
    lista.wyswietlListe();

    std::cout << "Tekst" << std::endl;
	int* p_int = new int;
	*p_int = 5;
    
	// nie usunięty p_int
    return 0;
}

