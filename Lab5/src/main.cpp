#include "macierze.hpp"
#include <iostream>

using namespace std;

int main()
{
    int ilosc_wierszy=6, ilosc_kolumn=4;

    Macierz przyklad(ilosc_wierszy, ilosc_kolumn);

    Macierz przyklad2(ilosc_wierszy,ilosc_wierszy);

    Macierz przyklad3(ilosc_wierszy, ilosc_kolumn);

    Macierz iloczyn(ilosc_wierszy, ilosc_wierszy);

    Macierz przyklad5(ilosc_wierszy, ilosc_wierszy);

    Macierz suma(ilosc_wierszy, ilosc_kolumn);

    Macierz roznica(ilosc_wierszy, ilosc_kolumn);

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

    // Test operatorów "+" i "-"
    suma = przyklad + przyklad3;
    cout <<"\n suma:\n";
    suma.print();

    roznica = przyklad - przyklad3;
    cout <<"\n roznica:\n";
    roznica.print();

    //Uzupełniam drugą macierz liczbami
    for(int i=0; i < ilosc_wierszy; i++)          
    {
        for(int j=0; j < ilosc_wierszy; j++) przyklad2.set(i+1 ,j+1 ,5.0);
    }
        
    for(int i=0; i < ilosc_wierszy; i++)          
    {
        for(int j=0; j < ilosc_wierszy; j++) przyklad5.set(i+1 ,j+1 ,5.0);
    }
    cout <<"\nMacierze ktore mnoze: (1)\n";
    przyklad2.print();
    cout <<"\n(2)\n";
    przyklad5.print();

    //test "*"
    iloczyn = przyklad5*przyklad2;
    cout <<"\n iloczyn:\n";
    iloczyn.print();

    //Sprawdzenie czy macierze sa takie same

    cout <<"\nTest porownania macierzy\n";
    if(iloczyn==przyklad5) cout << "\nsa takie same\n";
    else cout << "\nnie sa takie same\n";

    if(przyklad2==przyklad5) cout << "\nsa takie same\n";
    else cout << "\nnie sa takie same\n";

    //Pobieranie danego wiersza z macierzy
    Macierz pobieranie_wiersza(ilosc_wierszy, ilosc_kolumn);

    for(int i=0; i < ilosc_wierszy; i++)          
    {
        for(int j=0; j < ilosc_kolumn; j++) pobieranie_wiersza.set(i+1 ,j+1 ,4.0);
    }
    int n = pobieranie_wiersza.cols();
    cout <<"\nMacierz z ktorej pobralem wiersz.\n";
    pobieranie_wiersza.print();
    double* tab = pobieranie_wiersza[1];
    
    //Test operatora "<<"
    cout <<"\nPobrany wiersz\n";
    for(int i = 0; i < n; i++)
    cout << "[" << tab[i] << "] ";
    ofstream plik;
    plik.open("macierz.txt");
    plik<<pobieranie_wiersza;
    plik.close();


    return 1;
}