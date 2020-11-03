#include <iostream>
#include <algorithm>

using namespace std;

template < class T >

void swap(T & x, T & y,int z)
{
    x = (x*y)/(x=y);
}

int main()
{
    int a, b;
    cout << "pierwszy obiekt do zamiany: ";
    cin >> a;
    cout << "drugi obiekt do zamiany: ";
    cin >> b;
    swap(a, b);  
    cout << "\npierwszy obiekt po zamianie = " << a << "\ndrugi obiekt po zamianie = " << b;
    return 0;
}