#include <iostream>

using namespace std;

void zmiana2(int &x,int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void zmiana(int &x, int &y)
{
    swap(x,y);
}

int main(int argc, char *argv[])
{
    int a,b;
    cout << "Podaj pierwsza liczbe:\t";
    cin >> a;
    cout << "Podaj druga liczbe:\t";
    cin >> b;
    int test_a,test_b;
    test_a=a;
    test_b=b;
    zmiana(a,b);
    cout << "Liczby po zmianie (swap):\npierwsza: " << a << "\ndruga: " << b;
    zmiana2(test_a,test_b); //test poprawnosci działania pierwszej funkcji
    cout << "\nLiczby po zmianie (funkcja z zadania 2):\npierwsza: " << test_a << "\ndruga: " << test_b;
    return 0;
}
