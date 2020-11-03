#include <iostream>

using namespace std;

void zmiana(int &x,int *y)
{
    int temp;
    temp = x;
    x = *y;
    *y = temp;
}

int main(int argc, char *argv[])
{
    int a,b;
    cout << "Podaj pierwsza liczbe:\t";
    cin >> a;
    cout << "Podaj druga liczbe:\t";
    cin >> b;
    int *p = NULL;
    p = &b;
    zmiana(a,p);
    cout << "Liczby po zmianie:\npierwsza: " << a << "\ndruga: " << b;
    return 0;
}