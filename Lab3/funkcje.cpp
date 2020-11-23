#include "header.hpp"

using namespace std;

void Macierz::set(int n,int m, double val)
{
    if(n > W || m > K) cout << "Zle rozmiary macierzy\n";
    else macierz[n-1][m-1] = val;
} 

double Macierz::get(int n, int m)
{
    if(n > W || m > K){ 
        cout << "Zle rozmiary macierzy\n";
        exit(0);
    }
    else
    {
        return macierz[n-1][m-1];
    }
}

Macierz Macierz::add(Macierz m2)
{
    if((W == m2.W) && (K == m2.K))
    {
        Macierz suma(W,K);
        for(int i = 0; i < W; i++)
        {
            for(int j = 0; j < W;j++)
            {
                suma.macierz[i][j] = macierz[i][j] + m2.macierz[i][j];
            }
        }
        return suma;
    }
    else
    {
        cout << "Bledne rozmiary macierzy\n";
        exit(0);
    }
}

Macierz Macierz::subtract(Macierz m2)
{
    if((W == m2.W) && (K == m2.K))
    {
        Macierz roznica(W,K);
        for(int i = 0; i < W; i++)
        {
            for(int j = 0; j < W;j++)
            {
                roznica.macierz[i][j] = macierz[i][j] - m2.macierz[i][j];
            }
        }
        return roznica;
    }
    else
    { 
        cout << "Bledne rozmiary macierzy\n";
        exit(0);
    }
}

Macierz Macierz::multiply(Macierz m2)
{
    Macierz iloczyn(W,K);
    if(K == m2.W)
    {
        for(int i = 0; i < W; i++)
        {
            for(int j = 0; j < m2.K; j++)
            {
                double suma=0;
                for(int k = 0; k < m2.W; k++)
                    iloczyn.macierz[i][j] += macierz[i][k] * m2.macierz[k][j];
            }
        }
        return iloczyn;
    }
    else
    { 
        cout << "Bledne rozmiary macierzy\n";
        exit(0);
    }
}

int Macierz::cols()
{
    return K;
}

int Macierz::rows()
{
    return W;
}

void Macierz::print()
{
    for(int i = 0; i < W; i++)
    {
        for(int j = 0; j < K; j++)
        {
            cout << macierz[i][j] << "\t";
        }
        cout << "\n";
    }
}

void Macierz::store(string filename, string path)
{
    fstream plik;
    plik.open(path + filename, ios::out);
    if (plik.good() == true)
    {
        plik << "Ilosc wierszy: " << W << "\n" << "Ilosc kolumn: " << K << endl;

        for(int i = 0; i < W; i++)
        {
            for(int j = 0; j < K; j++)
            {
            plik << macierz[i][j] << "\t";
            }
            plik << "\n";
        }
    }
    else
    {
        cout << "Błąd otwarcia pliku\n";
        exit(0);
    }
    plik.close();
}
