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
    
    /**
     * Dodanie elementu pod index.
     * @param index Numer indeksu pod którym zostanie wstawiony nowy element.
     * @param wartosc Wartoœæ, która ma zostaæ dodana do listy.
     */
    void dodajPodIndex(int index, int wartosc);

    /**
     * Usuniêcie pierwszego elementu z listy.
     */
    void usunZPoczatku();

    /**
     * Usuniêcie ostatniego elementu z listy.
     */
    void usunZKonca();

    /**
     * Wyœwietlenie listy od pocz¹tku.
     */
    void wyswietlListe();
    
    /**
     * Wyœwietlenie listy od koñca.
     */
    void wyswietlListeOdTylu();
    
    
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
