#include <iostream>
using namespace std;
int main()
{
    int choice = 1;
	while( choice == 1 ){
	
		int num;

		cout << "Enter a Number to Verify Odd or Even: ";
		cin >> num;
        cout << endl;


		if( num%2 == 0 ){
			cout << "Number is Even";
            cout << endl;
		}
		else{
			cout << "Number is Odd";
            cout << endl;
		}

		cout << "To Check for more: 1 for Yes and 0 for No: ";
        cin >> choice;
        cout << endl;
	}

	cout << "All numbers are Verified" << endl;

	return 0;
}


    
