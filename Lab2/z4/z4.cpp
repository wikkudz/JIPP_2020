#include <iostream>
using namespace std;

void dodawanie_mnozenie(int *x,int *y)
{
	int liczba = *x, liczba2 =*y;
    *x = liczba + liczba2;
    *y = liczba * liczba2;
}

int main(int argc, char *argv[])
{
    int a,b;
    cout << "Podaj pierwsza liczbe:\t";
    cin >> a;
    cout << "Podaj druga liczbe:\t";
    cin >> b;
    int *p = NULL, *k = NULL;
    p=&a;
    k=&b;
    dodawanie_mnozenie(p,k);
    cout << "liczby po zsumowaniu = "<< a <<"\nliczby po wymnozeniu = "<<b;
    return 0;
}