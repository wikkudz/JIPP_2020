#include <iostream>
using namespace std;

int zmiana(int *x,int *y)
{
	if(*x > *y)
    {
        int temp;
        temp = *x;
        *x=*y;
        *y=temp;
        return 1;
    }
    else
    return 0;
   
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
    if(zmiana(p,k))
    cout << "liczby po zamianie\npierwsza = "<< a <<"\tdruga = "<<b;
    else
    cout << "Druga liczba jest wieksza\n";
    return 0;
}
