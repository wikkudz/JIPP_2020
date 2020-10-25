#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int ilosc, i, j, temp;
    cout << "Podaj ilosc liczb do posortowania\n";
    cin >> ilosc;
    int *liczby;
    if(ilosc==0) //warunek
    {
           cout << "Nie da sie posortowac 0 liczb";
           return 0;
    }
    cout << "Podaj te liczby:\n";
    for (i=0;i<ilosc;i++) //pobieranie liczb do posortowania
    {
        cin >> liczby[i];
    }
    for (i = 1; i < ilosc; i++) //algorytm sortowania przez wstawianie
    {
    temp = liczby[i];
    for (j= i-1; j>= 0; j--)
    {
        if(temp < liczby[j])
        liczby[j+1] = liczby[j];
        else
        break;
    }
    liczby[j+1] = temp;
    }
    cout << "Posortowane liczby:\n";
    for(i = 0; i < ilosc;i++) //wyswietlenie posortowanych liczb
    cout << liczby[i] << endl;
    return 0;
} 