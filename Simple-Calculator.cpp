#include <iostream>
using namespace std;
int main()
{
    // variables
    int num1, num2, res, choice;
    // taking users input
    cout << "Enter first integer: ";
    cin >> num1;
    cout << endl;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << endl;
    {

        cout << "[1]. Multiply"<< endl;
        cout << "[2]. Divide"<< endl;
        cout << "[3]. Add"<< endl;
        cout << "[4]. Subtract"<< endl;
        cout << "Choose an arithmetic operation from the given menu: ";
        cin >> choice;
        cout << endl;
    } 

    switch (choice)
    {
        case 1:
        res = num1 * num2;
        cout << "\nResult = " << res << endl;
        break;

        case 2:
        res = num1 / num2;
        cout << "\nResult = " << res << endl;
        break;

        case 3:
        res = num1 + num2;
        cout << "\nResult = " << res << endl;
        break;

        case 4:
        res = num1 - num2;
        cout << "\nResult = " << res << endl;
        break;
    
        default:
        cout << "\n  Wrong Choice! " << endl;
        break;
    }

    return 0;
}