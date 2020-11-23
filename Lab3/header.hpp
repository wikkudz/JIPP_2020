#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

class Macierz
{
    private:

    int W, K; //wiersze, kolumny
    double **macierz;

    public:

    Macierz(int n, int m) //konstruktor macierzy
    {
        if(n>0 || m>0)
        {
            W = n;
            K = m;
            macierz = new double *[n];

            for(int i = 0; i < n; i++)
            {
                macierz[i] = new double[n];

                for(int j = 0; j < m; j++) macierz[i][j] = 0;
            }
        }
        else cout << "Liczba wierszy i kolumn nie moze byc mniejsza od zera\n";

    }
    
    Macierz(int a)//konstruktor macierzy kwadratowej
    {
        if(a>0)
        {
            W = a;
            K = a;
            macierz = new double *[a];

            for(int i = 0; i < a; i++)
            {
                macierz[i] = new double[a];

                for(int j = 0; j < a; j++) macierz[i][j] = 0;
            }
        }
    }

    Macierz(string path) //konstruktor jako argument przyjmujący ścieżkę do pliku i na jego podstawie tworzący nową macierz na podstawie przekazanego pliku
    {
        fstream plik;
        plik.open(path, ios::in);
        if (plik.good() == true)
        {
            plik >> Macierz::W;
            plik >> Macierz::K;

            macierz = new double *[W];
            for (int i = 0; i < W; i++)
            {
                macierz[i] = new double[K];

                for (int j = 0; j < K; j++)
                {
                    plik >> Macierz::macierz[i][j];
                }
            }
        }
        else
        {

            cout << "\n Plik ERROR \n";
            exit(0);
        }
        plik.close();
    }

    void set(int n, int m, double val); //metoda ustawiająca wartość elementu (n, m) na val
    double get(int n, int m); //metoda pobierająca element (n, m)
    Macierz add(Macierz m2); //dodawanie macierzy
    Macierz subtract(Macierz m2); //odejmowanie
    Macierz multiply(Macierz m2); //mnożenie
    int cols();//funkcja zwracajaca ilosc kolumn
    int rows();//funkcja zwracajaca ilosc wierszy
    void print();//funkcja pokazujaca macierz na ekranie
    void store(string filename, string path);//funkcja zapisujaca macierz w pliku
};
