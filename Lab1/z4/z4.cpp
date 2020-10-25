#include <iostream>
#include <cstring>
using namespace std;

int suma_dzielnikow(int liczba)          //funkcja sumujaca dzielniki
{
    int suma = 0;
    int i = 1;
    while (i < liczba)
    {
        if (liczba % i == 0)
        {
            suma += i;
        }
        i++;
    }
    return suma;
}
int main(int argc, char *argv[])
{
    cout << "Podaj dwie liczby calkowite do sprawdzenia czy sa skojarzone" << endl;
    int a,b;
    cin >> a >> b;
    if (a<=1 && b<=1) //sprawdzenie warunku
    cout << "Liczby musza byc wieksze od 1";
    else
    {
        int sa,sb;
        sa = suma_dzielnikow(a);
        sb = suma_dzielnikow(b);
        if(sa == b+1 && sb == a+1)
        cout << "Sa to liczby skojarzone" << endl;
        else
        cout << "Nie sa to liczby skojarzone" << endl;
    }
    return 0;
}