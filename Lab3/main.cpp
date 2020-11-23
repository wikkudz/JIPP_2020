#include <iostream>
#include "funkcje.cpp"

/*W TYM MIEJSCU PROSZĘ WPISAĆ ŚCIEŻKĘ DO PLIKU np. C:\\Users\\nazwa_uzytkownika\\Desktop\\Lab3\\ */
#define SCIEZKA ""
using namespace std;

int main()
{
    int ilosc_wierszy=6, ilosc_kolumn=4;

    Macierz przyklad(ilosc_wierszy, ilosc_kolumn);

    Macierz przyklad2(ilosc_kolumn);

    Macierz przyklad3(ilosc_wierszy, ilosc_kolumn);

    cout << "Pierwsza macierz\n";
    przyklad.print();
    cout << "\nDruga macierz\n";
    przyklad2.print();

    przyklad.set(3 ,3 ,1.3);
    cout << "\nPrzykladowa macierz po ustawieniu wartosci\n";
    przyklad.print();

    cout << "\nPobieranie przykladowej wartosci z macierzy: " << przyklad.get(3,3) << endl;

    przyklad3.set(1 ,1 ,5.3);
    przyklad3.set(3 ,3 ,5.3);
    cout << "\nTrzecia macierz\n";
    przyklad3.print();

    cout << "\nSuma pierwszej i trzeciej macierzy\n";
    przyklad.add(przyklad3).print();

    cout << "\nRoznica pierwszej i trzeciej macierzy\n";
    przyklad.subtract(przyklad3).print();

    // Uzupełniam drugą macierz liczbami
    for(int i=0; i < ilosc_kolumn; i++)          
    {
        for(int j=0; j < ilosc_kolumn; j++) przyklad2.set(i+1 ,j+1 ,10.0);
    }
    cout << "\nIloczyn trzeciej i pierwszej macierzy\n";
    przyklad3.multiply(przyklad2).print();

    cout << "\nLiczba wierszy pierwszej macierzy: " << przyklad.rows() << endl;

    cout << "\nLiczba kolumn pierwszej macierzy: " << przyklad.cols() << endl;

    //Zapisuję macierz do pliku macierz.txt
    przyklad3.store("macierz.txt",SCIEZKA);

    //Konstrukror czytajacy macierz z pliku (w pierwszej linijce podajemy ilosc wierszy i kolumn oddzielone spacja)
    Macierz macierz_z_pliku(SCIEZKA"testmacierz.txt");
    macierz_z_pliku.print();

    return 1;
}