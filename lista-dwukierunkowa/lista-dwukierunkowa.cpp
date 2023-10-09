#include "Lista.h"

int main() 
{

	// Tworzenie nowej listy
	Lista lista;

	// Dodawanie elementów do listy
	lista.dodajNaPoczatek(150);
	lista.dodajNaPoczatek(999);
	lista.dodajNaPoczatek(324);
	lista.dodajNaKoniec(1235);
	lista.dodajPodIndex(1, 4);

	// Usuwanie elementów z listy
	lista.usunIndeks(1);
	lista.usunZKonca();
	lista.usunZPoczatku();

	// Wyświetlanie zawartości listy
	lista.wyswietlListe();
	lista.wyswietlListeOdTylu();
	lista.wyswietlNastepny(0);
	lista.wyswietlPoprzedni(1);

	// Czyszczenie listy
	lista.wyczyscListe();

	// Wyświetlenie zawartości pustej listy
	lista.wyswietlListe();

	// Zakończenie programu
	return 0;
}
