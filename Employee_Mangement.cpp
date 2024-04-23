#include <bits/stdc++.h>
using namespace std;

int empNum = 0;

class Employee
{
public:
    int id;
    string name;
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
    double salary;
};

// input employee details
void inputEmployee(Employee &emp)
{
    cout << "Enter id : ";
    cin >> emp.id;
    cout << "Enter name : ";
    cin >> emp.name;
    cout << "Enter DOB(day month year) : ";
    cin >> emp.dayOfBirth >> emp.monthOfBirth >> emp.yearOfBirth;
    cout << "Enter salary : ";
    cin >> emp.salary;
}

// print employee details
void outputEmployee(Employee &emp)
{
    int currYear = 2024;
    cout << endl
         << "ID : " << emp.id << endl;
    cout << "Name : " << emp.name << endl;
    cout << "Age : " << currYear - emp.yearOfBirth << endl;
    cout << "Salary : " << emp.salary << endl;
}

// calculating average salary
double calcAvgSalary(vector<double> salary)
{
    double total = 0;
    for (int i = 0; i < empNum; i++)
    {
        total += salary[i];
    }

    return total / empNum;
}

// calculating average age
int calcAvgAge(vector<int> age)
{
    int totalAge = 0;

    for (int i = 0; i < empNum; i++)
    {
        totalAge += age[i];
    }
    return totalAge / empNum;
}

int main()
{

    cout << "Enter employee number : ";
    cin >> empNum;

    Employee emp[empNum];
    cout << endl;
    // taking input for employee
    for (int i = 0; i < empNum; i++)
    {
        cout << "Enter details for employee " << i + 1 << endl;
        inputEmployee(emp[i]);
        cout << endl;
    }

    // printing employe details
    cout << "Employee details" << endl;
    for (int i = 0; i < empNum; i++)
    {
        outputEmployee(emp[i]);
    }

    vector<double> salary(empNum);
    vector<int> age(empNum);

    // taking all salary and age in vectors
    for (int i = 0; i < empNum; i++)
    {
        salary[i] = emp[i].salary;
        age[i] = 2024 - emp[i].yearOfBirth;
    }
    cout << endl;

    // printing avg salary and age;
    cout << "Average salary is : ";
    cout << calcAvgSalary(salary) << endl;
    cout << "Average age is : ";
    cout << calcAvgAge(age) << endl;

    return 0;
}
