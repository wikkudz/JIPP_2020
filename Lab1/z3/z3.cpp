#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float masa_ciala,wzrost,BMI;
    cout << "Podaj swoja wage [kg]" << endl; //odczytanie zmiennych
    cin >> masa_ciala;
    cout << "Podaj swoj wzrost [m]" << endl;
    cin >> wzrost;
    BMI = (masa_ciala)/(wzrost * wzrost); // obliczenie BMI
    cout << "twoj wskaznik bmi to: " << BMI << endl;
    if(BMI<16)                                       //sprawdzenie wskaznika
    cout << "Wyglodzenie" << endl;
    else if (BMI > 16 && BMI <16.99)
    cout << "Wychudzenie" << endl;
    else if (BMI > 17 && BMI <18.49)
    cout << "Niedowaga" << endl;
    else if (BMI > 18.5 && BMI <24.99)
    cout << "Wartosc prawidlowa" << endl;
    else if (BMI > 25 && BMI <29.99)
    cout << "Nadwaga" << endl;
    else if (BMI > 30 && BMI <34.99)
    cout << "I stopien otylosci" << endl;
    else if (BMI > 35 && BMI <39.99)
    cout << "II stopien otylosci" << endl;
    else if (BMI > 40)
    cout << "Otylosc skrajna" << endl;
    return 0;
}