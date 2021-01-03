#include <string>
#include <iostream>
#include <map>
#include <stack>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

unsigned int id_emp = 0;

bool sortuj(const pair<string, double> a, const pair<string, double> b)
{
    return a.second > b.second;
}

class Employee
{
    public:
    string id;
    string name;
    string surname;
    string departmentId;
    string position;

    void print()
    {
        cout << "\n|ID: " << id;
        cout << "\n|NAME: " << name;
        cout << "\n|SURNAME: " << surname;
        cout << "\n|DEPARTMENT ID: " << departmentId;
        cout << "\n|POSITION: " << position;
        cout << endl;
    }

};

class HRMS
{   
    private:
    //unsigned int id_emp;
    map<string, Employee> map_emp;
    map<string, vector<string>> map_dep_id;
    map<string, double> map_salaries;

    public:
    // HRMS()
    // {
    //     id_emp = 1;
    // }
    void add(Employee employee, string departmentId, double salary)
    {
        employee.departmentId = departmentId;
        employee.id = to_string(id_emp);
        id_emp++;
        map_emp[employee.id] = employee;

        map_dep_id[departmentId].push_back(employee.id);

        map_salaries[employee.id] = salary;
    }

    void printDepartment(string departmentId)
    {
        cout << "\nEmployees from "<< departmentId << " department: ";
        for(string n : map_dep_id[departmentId])
        {
            map_emp[n].print();
            cout << "^SALARY: " << map_salaries[n] << "\n\n";
        }
    }

    void changeSalary(string employeeid, double salary)
    {
        map_salaries[employeeid] = salary;
    }

    void printSalaries()
    {
        map<string, Employee>::iterator it;
        cout << "\nSalaries of employees: " << endl;
        for (it = map_emp.begin(); it != map_emp.end(); ++it)
        {
            it->second.print();
            cout << "^SALARY :" << map_salaries[it->first] << "\n\n";
        }
    }

    void printSalariesSorted()
    {
        list<pair<string, double>> sortowanie;
        map<string, double>::iterator it;
        for (it = map_salaries.begin(); it != map_salaries.end(); ++it)
        {
            sortowanie.push_back(make_pair(it->first, it->second));
        }
        
        sortowanie.sort(sortuj);

        list<pair<string, double>>::iterator it2;
        cout << "\nPrint sorted salaries of employees: " << endl;
        for (it2 = sortowanie.begin(); it2 != sortowanie.end(); ++it2)
        {
            map_emp[it2->first].print();
            cout << "^SALARY :" << map_salaries[it2->first] << "\n\n";
        }
    }

};

