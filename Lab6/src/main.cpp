#include <iostream>
#include "../include/HR.hpp"

int main()
{
    Employee pracownik;
    HRMS dane;

    pracownik.name = "Wiktor";
    pracownik.surname = "Kudzia";
    pracownik.position = "Kierownik"; 
    dane.add(pracownik,"Wysylka",10234.56);

    pracownik.name = "Adam";
    pracownik.surname = "Nowak";
    pracownik.position = "Specjalista"; 
    dane.add(pracownik,"Przyjecia",214);

    pracownik.name = "Anna";
    pracownik.surname = "Kowalska";
    pracownik.position = "Magazynier"; 
    dane.add(pracownik,"Wysylka",2000.25);

    pracownik.name = "Katarzyna";
    pracownik.surname = "Mała";
    pracownik.position = "Brygadzista"; 
    dane.add(pracownik,"Zwroty",3000.98);

    pracownik.name = "Michal";
    pracownik.surname = "Duzy";
    pracownik.position = "Asystent"; 
    dane.add(pracownik,"Przyjecia",4000.70);

    pracownik.name = "Wojciech";
    pracownik.surname = "Sredni";
    pracownik.position = "Dyrektor"; 
    dane.add(pracownik,"Wysylka",1445.56);

    pracownik.name = "Jan";
    pracownik.surname = "Kowalczyk";
    pracownik.position = "Wlasciciel"; 
    dane.add(pracownik,"Brak",214587.55);

    pracownik.name = "Adam";
    pracownik.surname = "Malysz";
    pracownik.position = "Skoczek"; 
    dane.add(pracownik,"Skocznia",20000.25);

    pracownik.name = "Monika";
    pracownik.surname = "Monikowska";
    pracownik.position = "Koordynator"; 
    dane.add(pracownik,"Zwroty",3040.98);

    pracownik.name = "Krzysztof";
    pracownik.surname = "Lew";
    pracownik.position = "Magazynier"; 
    dane.add(pracownik,"Wysylka",4000.70);

    dane.printSalaries();
    cout << "-----------------------------\n\n";

    dane.printDepartment("Wysylka");
    cout << "-----------------------------\n\n";

    dane.printSalariesSorted();

    return 1;
}
