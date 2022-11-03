#include <iostream>
using namespace std;
int main()
{
    // declare variables
    
    double CS112, CS111, NSTP1, FILIPINO, ENGLISH; 
    double sum, average;
    
    // taking the input grade 
    cout << "Enter Your Grade in CS112: ";
    cin >> CS112; 
    cout << "Enter Your Grade in CS111: ";
    cin >> CS111;
    cout << "Enter Your Grade in NSTP1: ";
    cin >> NSTP1;
    cout << "Enter Your Grade in FILIPINO: ";
    cin >> FILIPINO;
    cout << "Enter Your Grade in ENGLISH: ";
    cin >> ENGLISH;

    // calculate the sum value of the grade inputed

    sum = CS112 + CS111 + NSTP1 + FILIPINO + ENGLISH;

    // calculate average value 

    average = sum / 5;

    // display result 
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    
    return 0;
    
}