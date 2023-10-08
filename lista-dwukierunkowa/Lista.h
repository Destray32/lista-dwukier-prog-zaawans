/**
 * Klasa implementuj¹ca listê dwukierunkow¹.
 */
class Lista
{
public:
    Lista();
    ~Lista();

    /**
    * Dodanie elementu na pocz¹tek listy.
    * @param wartosc Wartoœæ, która ma zostaæ dodana do listy.
    */
    void dodajNaPoczatek(int wartosc);
    /**
    * Dodanie elementu na koniec listy.
    * @param wartosc Wartoœæ, która ma zostaæ dodana do listy.
    */
    void dodajNaKoniec(int wartosc);

	void dodajPodIndex(int index, int wartosc);

    void wyswietlListe();
    
    
private:
    /**
     * Struktura definiuj¹ca element listy.
     */
    struct Element
    {
        int wartosc; /* Wartoœæ przechowywana przez element. */
        Element* nastepny; /* WskaŸnik na nastêpny element listy. */
        Element* poprzedni; /* WskaŸnik na poprzedni element listy. */
    };
    Element* pierwszy; /* WskaŸnik na pierwszy element listy. */
    Element* ostatni; /* WskaŸnik na ostatni element listy. */
    int liczbaElementow;
};
