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
    * @param wartosc Warto��, kt�ra ma zosta� dodana do elementu.
    */
    void dodajNaPoczatek(int wartosc);
    
    
private:
    /**
     * Struktura definiuj�ca element listy.
     */
    struct Element
    {
        int wartosc; /**< Warto�� przechowywana przez element. */
        Element* nastepny; /**< Wska�nik na nast�pny element listy. */
        Element* poprzedni; /**< Wska�nik na poprzedni element listy. */
    };
    Element* pierwszy; /**< Wska�nik na pierwszy element listy. */
    Element* ostatni; /**< Wska�nik na ostatni element listy. */
};
