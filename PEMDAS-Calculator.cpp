#include <iostream>
#include <string>
#include <vector>
#include <deque>

#include <math.h>

using namespace std;

class token 
{
    public:
        double num1,num2;
        char op;

        token(double a, char b, double c) : num1(a),op(b),num2(c){};
        token() : num1(0),op(0),num2(0){};
        void initialize(double a, char b, double c) {num1 = a; op = b; num2 = c; return;}
        double solve()
        
        {
            switch(op)
            {
                case '+' : return (num1+num2);
                case '-' : return (num1-num2);
                case '*' : return (num1*num2);
                case '/' : return (num1/num2);
                case '^' : return (pow(num1,num2));
                case 'r' : return (pow(num2,1/num1));
            }
        }
};


string expression;
deque<double> numbers;
deque<char> operators;


void express()
{
    cout << "'+' to add\n'-' to subtract\n'*' to multiply\n'/' to divide\n'^' for powers\n'r' for roots\n\n";
    cout << "Enter your expression:\n";
    cin >> expression;
    return;
}

void extract() //Turns an expression into a list of numbers and operators.
{
    vector<int> digits;
    unsigned int i,k; int temp=0;

    for (i=0; i<=expression.size(); i++)
    {
        if (expression[i]>='0' && expression[i] <='9') digits.push_back(expression[i]-'0');
        else {
                operators.push_back(expression[i]);
                for (k=0; k<digits.size(); k++) temp+=digits.at(k)*pow(10,(digits.size()-1-k));
                numbers.push_back(temp);
                digits.clear();
                temp=0;
             }
    }
    operators.erase(operators.end());
    return;
}


void addsub() //Does adding and subtracting.
{
        token tempp;
        double temp = numbers.at(0);

    while (true)
    {
        if (operators.at(0) == '+' || operators.at(0) == '-')
        {
                numbers.erase(numbers.begin());
                tempp.initialize(temp ,operators.at(0), numbers.at(0));
                temp = tempp.solve();

                if (operators.size() == 1)
                {
                    operators.clear();
                    numbers.at(0) = temp;
                    return;
                }

                else
                operators.erase(operators.begin());
        }
    }
}



void multidiv() //Does multiplication and division.
{
        token tempp;
        double temp;
        unsigned int i;

    for (i=0; i<operators.size(); i++)
    {
        if (operators.at(i) == '*' || operators.at(i) == '/')
        {
            tempp.initialize(numbers.at(i) ,operators.at(i), numbers.at(i+1));
            temp = tempp.solve();

            if (operators.size() == 1)
                {
                    operators.clear();
                    numbers.at(0) = temp;
                    return;
                }

                else
                {
                    operators.erase(operators.begin()+i);
                    numbers.erase(numbers.begin()+i+1);
                    numbers.at(i) = temp;
                }
            --i;
        }
    }
    addsub();
}


void calculate() //Does powers and roots.
{
        token tempp;
        double temp;
        unsigned int i;

    for (i=0; i<operators.size(); i++)
    {
        if (operators.at(i) == '^' || operators.at(i) == 'r')
        {
            tempp.initialize(numbers.at(i) ,operators.at(i), numbers.at(i+1));
            temp = tempp.solve();

            if (operators.size() == 1)
                {
                    operators.clear();
                    numbers.at(0) = temp;
                    return;
                }

                else
                {
                    operators.erase(operators.begin()+i);
                    numbers.erase(numbers.begin()+i+1);
                    numbers.at(i) = temp;
                }
            --i;
        }
    }
    multidiv();
}



int main ()
{
    express();
    extract();
    calculate();

    cout << "Final answer: " << numbers.at(0) << endl << endl;

    return 0;
}

