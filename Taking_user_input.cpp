#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int age;
    string barangay;
    string municipality;
    string province;
    string month;
    int day;
    int year;
    string space = ", ";

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your Birthday: " << endl;
    cout << "Month: ";
    cin >> month;
    cout << "Day: ";
    cin >> day;
    cout << "Year: ";
    cin >> year;
    cout << "Enter your current Location: " << endl;
    cout << "Barangay: ";
    cin >> barangay;
    cout << "Municipality: ";
    cin >> municipality;
    cout << "Province: ";
    cin >> province;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Date of Birth: ";
    cout << month << space;
    cout << day << space; 
    cout << year << space << endl;
    cout << "Current Location: ";
    cout << barangay << space;
    cout << municipality << space;
    cout << province << space << endl;

    return 0;

}