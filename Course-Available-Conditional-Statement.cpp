#include <iostream>
#include <string>
using namespace std;
int main()
{   
    // variable 
    string name;
    int score;

    // taking users input 
    cout << "Enter Complete Name: ";
    getline(cin, name);
    cout << endl;
    cout << "Enter Entrance Exam Score: ";
    cin >> score;
    cout << endl;

    // coditional statement
    if (score <= 30){
        cout << "Hello " << name << " below are the available courses based from your entrance exam score"<< endl;
        cout << "Courses:"<< endl;
        cout << "   BSIT" << endl;
        cout << "   BSHRM" << endl;
        cout << "   AB English" << endl;
        cout << "   AB PolSci" << endl;
        cout << "   DAT" << endl;

        cout << endl;
        cout <<"Thank You. Enroll Now." << endl;
    }
    else if (score == 31 || (score <= 40)){
        cout << "Hello " << name << " below are the available courses based from your entrance exam score"<< endl;
        cout << "Courses:"<< endl;
        cout << "   BSCS" << endl;
        cout << "   BSBA" << endl;
        cout << "   BSITECH" << endl;
        cout << "   AB LEGAL Management" << endl;

        cout << endl;
        cout <<"Thank You. Enroll Now." << endl;

    }

      else if (score <= 41){
        cout << "Hello " << name << " below are the available courses based from your entrance exam score"<< endl;
        cout << "Courses:"<< endl;
        cout << "   BSCRIM" << endl;
        cout << "   BSE" << endl;
        cout << "   BEED" << endl;
        
        cout << endl;
        cout <<"Thank You. Enroll Now." << endl;
    }
    else
    {
        cout << "Sorry you have entered an invalid Score. Please try again. Thank You" << endl;
    }
    

}