#include "macierze.hpp"

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

Macierz Macierz::operator+(Macierz &obiekt)
{
    int i,j;
    Macierz wynik(W, K);
    if((W == obiekt.W) && (K == obiekt.K))
    {
    for(i = 0; i < W; i++)
    {
        for(j = 0; j < K; j++)
        {
            wynik.macierz[i][j] = macierz[i][j] + obiekt.macierz[i][j];
        }
    } 
    return wynik;
    }
    else 
    {
        printf("\nBledne rozmiary macierzy\n");
        return 0;
    }
}

Macierz Macierz::operator-(Macierz &obiekt)
{
    int i,j;
    Macierz wynik(W, K);
    if((W == obiekt.W) && (K == obiekt.K))
    {
    for(i = 0; i < W; i++)
    {
        for(j = 0; j < K; j++)
        {
            wynik.macierz[i][j] = macierz[i][j] - obiekt.macierz[i][j];
        }
    } 
    return wynik;
    }
    else 
    {
        printf("\nBledne rozmiary macierzy\n");
        return 0;
    }
}

Macierz Macierz::operator*(Macierz &obiekt)
{
    Macierz wynik(W,K);
    if(K == obiekt.W)
    {
        int i,j,k;
        for(i = 0; i < W; i++)
        {
            double sum;
            for(j = 0; j < obiekt.K; j++)
            {
                sum=0;
                for(k = 0; k < K; k++)
                wynik.macierz[i][j] += macierz[i][k] * obiekt.macierz[k][j];
            }
            wynik.macierz[i][j] = sum;
        }
        return wynik;
    }
    else
    { 
        cout << "Bledne rozmiary macierzy\n";
        exit(0);
    }
}

void operator<<(ostream &plik, Macierz &macierz_do_zapisania)
{
    plik << "Liczba kolumn: "<< macierz_do_zapisania.cols() << "\n" <<"Liczba wierszy: "<< macierz_do_zapisania.rows() << endl;
    for(int i=0; i < macierz_do_zapisania.rows(); i++)
    {
        for(int j=0; j < macierz_do_zapisania.cols(); j++)
        plik << macierz_do_zapisania.macierz[i][j] << " ";
        plik << "\n";
    }
}

bool Macierz::operator==(Macierz &obiekt)
{
    if((W != obiekt.rows()) || (K != obiekt.cols()))
    {
        return false;
    }

    int i,j;

    for(i = 0; i < W; i++)
    {
        for(j = 0; j < K; j++)
        {
            if(macierz[i][j] != obiekt.macierz[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

double* Macierz::operator[](int x)
{
    if ((x < 0) || (x > W))
    {
        cout << "\nBledne rozmiary macierzy\n";
        return 0;
    }
    else
    {
        return macierz[x];
    }
}


