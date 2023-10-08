/**
 * Klasa implementuj�ca list� dwukierunkow�.
 */
class Lista
{
public:
    Lista();
    ~Lista();

    /**
    * Dodanie elementu na pocz�tek listy.
    * @param wartosc Warto��, kt�ra ma zosta� dodana do listy.
    */
    void dodajNaPoczatek(int wartosc);
    /**
    * Dodanie elementu na koniec listy.
    * @param wartosc Warto��, kt�ra ma zosta� dodana do listy.
    */
    void dodajNaKoniec(int wartosc);

	void dodajPodIndex(int index, int wartosc);

    void wyswietlListe();
    
    
private:
    /**
     * Struktura definiuj�ca element listy.
     */
    struct Element
    {
        int wartosc; /* Warto�� przechowywana przez element. */
        Element* nastepny; /* Wska�nik na nast�pny element listy. */
        Element* poprzedni; /* Wska�nik na poprzedni element listy. */
    };
    Element* pierwszy; /* Wska�nik na pierwszy element listy. */
    Element* ostatni; /* Wska�nik na ostatni element listy. */
    int liczbaElementow;
};
