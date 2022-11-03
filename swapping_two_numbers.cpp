#include <iostream>
using namespace std;
int main()
{
    int first_number, second_number, temp;

    // take the input number from the user

    cout << "Enter the 1st number: ";
    cin >> first_number;
    cout << "Enter the second number: ";
    cin >> second_number;
    cout << endl;

    // swap the two number
    temp = first_number;
    first_number = second_number;
    second_number = temp;

    // display the swapped number
    cout << "After swapping the first number is: " << first_number <<  endl;
    cout << "After swapping the second number is: " << second_number << endl;

    return 0;
}