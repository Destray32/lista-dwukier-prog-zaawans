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
     * Usuniêcie elementu pod index.
     * @param index Numer indeksu elementu, który ma zostaæ usuniêty.
     */
    void usunIndeks(int index);

    /**
     * Wyœwietlenie listy od pocz¹tku.
     */
    void wyswietlListe();
    
    /**
     * Wyœwietlenie listy od koñca.
     */
    void wyswietlListeOdTylu();

    /**
     * Wyœwietlenie kolejnego elementu listy po elemencie o zadanym indeksie.
     * @param index Numer indeksu elementu, po którym ma zostaæ wyœwietlony kolejny element.
     */
    void wyswietlNastepny(int index);

    /**
     * Wyœwietlenie poprzedniego elementu listy przed elementem o zadanym indeksie.
     * @param index Numer indeksu elementu, przed którym ma zostaæ wyœwietlony poprzedni element.
     */
    void wyswietlPoprzedni(int index);

    /**
     * Usuniêcie wszystkich elementów z listy.
     */
    void wyczyscListe();
    
    
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
