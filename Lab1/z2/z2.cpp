#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Podaj wyraz do sprawdzenia\n";
    char wyraz[20];
    cin >> wyraz;                                    //wczytanie wyrazu
    int dlugosc,i;
    dlugosc = strlen(wyraz);                         //odczytanie ilosci znakow
    dlugosc--;                                       //przescie na ostatni znak
    for(int i=0;i<=dlugosc/2;i++)                    //sprawdzenie kolejno kazdego znaku
    {
          if(wyraz[i]!=wyraz[dlugosc-i])
          {
              cout << "wyraz nie jest palindromem" << endl;  
              return 0;
          }   
    }
    cout << "wyraz jest palindromem" << endl;
    return 0;

}