#include <iostream>
#include "Lista.h"

int main()
{
    Lista lista;
    lista.dodajNaPoczatek(150);
    lista.dodajNaKoniec(889);
    lista.dodajPodIndex(0, 10);
    lista.wyswietlListe();
    
    return 0;
}

