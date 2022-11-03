#include <iostream>
using namespace std;

int main()
{
    //declaring variable
   
    int num1, num2;
    
    //taking the input 

    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;

    // comparing the two input number

    if (num1 > num2)
    {
        cout << "num1" << endl; 
    }
    else if (num2 > num1)
    {
        cout << "num2" << endl;
    }
    return 0;
}