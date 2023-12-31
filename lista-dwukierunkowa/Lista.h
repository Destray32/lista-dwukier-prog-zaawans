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
    
    /**
     * Dodanie elementu pod index.
     * @param index Numer indeksu pod kt�rym zostanie wstawiony nowy element.
     * @param wartosc Warto��, kt�ra ma zosta� dodana do listy.
     */
    void dodajPodIndex(int index, int wartosc);

    /**
     * Usuni�cie pierwszego elementu z listy.
     */
    void usunZPoczatku();

    /**
     * Usuni�cie ostatniego elementu z listy.
     */
    void usunZKonca();

    /**
     * Usuni�cie elementu pod index.
     * @param index Numer indeksu elementu, kt�ry ma zosta� usuni�ty.
     */
    void usunIndeks(int index);

    /**
     * Wy�wietlenie listy od pocz�tku.
     */
    void wyswietlListe();
    
    /**
     * Wy�wietlenie listy od ko�ca.
     */
    void wyswietlListeOdTylu();

    /**
     * Wy�wietlenie kolejnego elementu listy po elemencie o zadanym indeksie.
     * @param index Numer indeksu elementu, po kt�rym ma zosta� wy�wietlony kolejny element.
     */
    void wyswietlNastepny(int index);

    /**
     * Wy�wietlenie poprzedniego elementu listy przed elementem o zadanym indeksie.
     * @param index Numer indeksu elementu, przed kt�rym ma zosta� wy�wietlony poprzedni element.
     */
    void wyswietlPoprzedni(int index);

    /**
     * Usuni�cie wszystkich element�w z listy.
     */
    void wyczyscListe();
    
    
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
