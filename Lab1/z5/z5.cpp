#include <iostream>
#include <cstring>
using namespace std;

void pobieranie_macierzy(int macierz[2][3])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        cin >> macierz[i][j];
    }
}

int main (int argc, char *argv[])
{
    int m1[2][3],m2[2][3],m3[2][3];
    int i,j;
    cout << "Podaj pierwsza macierz 2x3 (wierszami)" << endl;
    pobieranie_macierzy(m1);
    cout << "Podaj druga macierz 2x3 (wierszami)" << endl;
    pobieranie_macierzy(m2);
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        m3[i][j] = m1[i][j] + m2[i][j];
    }
    cout << "Macierz po zsumowaniu:" << endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        cout << m3[i][j] << "\t";
        cout << endl;
    }

}