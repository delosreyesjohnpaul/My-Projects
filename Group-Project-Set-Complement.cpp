#include <iostream>
#include <cmath>
using namespace std;

void mode(int[], int);
void mean(int[], int);
void sort(int[], int);
void median(int[], int);

int main()
{
    char ruway;
    int choice;
    do
    {
        cout << "\t\t Math Operations \n\n";
        cout << "\t[1] Calculator \n";
        cout << "\t[2] Perimeter \n";
        cout << "\t[3] Area \n";
        cout << "\t[4] Surface Area \n";
        cout << "\t[5] Volume\n";
        cout << "\t[6] Sequence\n";
        cout << "\t[7] Mean, Median, Mode of Ungrouped Data\n";
        cout << endl;
        cout << "\tSelect Your Operation Choice : ";
        cin >> choice;
        cout << endl;

        //calculator

        if (choice == 1){
            char op;
            float num1, num2;

            cout << "Enter operator: +, -, *, /: ";
            cin >> op;

            cout << "Enter a Number: ";
            cin >> num1;
            cout << "Enter a Number: ";
            cin >> num2;

            switch(op) {

                case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;

                case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;

                case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;

                case '/':
                cout << num1 << " / " << num2 << " = " << num1 / num2;
                break;

                default:
                // If the operator is other than +, -, * or /, error message is shown
                cout << "Error! operator is not correct";
                break;
            }


        }

        else if (choice == 2){
            char x;
            int option;
            do {
                int option;
                cout <<"\t\tChoose The Area You Want to Find:  \n\n";
                cout << "\t[1] Perimeter of A Circle \n";
                cout << "\t[2] Perimeter of A Triangle \n";
                cout << "\t[3] Perimeter of A Square \n";
                cout << "\t[4] Perimeter of A Rectangle \n";
                cout << "\t[5] Perimeter of A Rhombus \n";
                cout << "\t[6] Perimeter of A Parallelogram \n";
                cout << "\t[7] Perimeter of A Trapezoid \n";
                cout << endl;
                cout << "\tSelect Your Choice : ";
                cin >> option;
                cout << endl;

                if (option == 1){

                    float r, p;

                    cout << "Enter the Radius of the Cirle: ";
                    cin>> r;
                    cout << endl;
                    cout << endl;

                    // calculating the perimeter
                    p = 2 * 3.14 * r;

                    cout << "The Perimeter of the Circle is: "<< p<< " meter"<< endl;
                    cout << endl;
                    cout << endl;
                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Perimeter of a Circle:"<< endl;
                    cout << endl;
                    cout << "2 * pi * r"<< endl;
                    cout << endl;
                    cout << "2 * 3.14 * " << r << " = " << p<< " meter"<< endl;

                }

                else if (option == 2){
                    float a, b, c, p;

                    cout << "Enter the first side of the triangle: ";
                    cin>> a;
                    cout << endl;
                    cout << "Enter the second side of the triangle: ";
                    cin>> b;
                    cout << endl;
                    cout << "Enter the third side of the triangle: ";
                    cin>> c;
                    cout << endl;
                    cout << endl;

                    p = a + b + c;

                    cout << "The Perimeter of the Triangle is: "<< p<< " meter"<< endl;
                    cout << endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Perimeter of a Triangle:"<< endl;
                    cout << endl;
                    cout << "a + b + c "<< endl;
                    cout << endl;
                    cout << a << " + " << b << " + " << c << " = " << p << " meter"<< endl;

                }

                else if (option == 3) {

                    int a, p;

                    cout << "Enter the Side of the Square: ";
                    cin >> a;
                    cout << endl;
                    cout << endl;
                    p = 4 * a;

                    cout << "The Perimeter of the Square is: "<< p<< " meter"<< endl;
                    cout << endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Perimeter of a Square:"<< endl;
                    cout << endl;
                    cout << "4 * a"<< endl;
                    cout << endl;
                    cout << "4 * " << a << " = "<< p << " meter" << endl;

                }

                else if (option == 4) {
                    float l, w, p;

                    cout << "Enter the Length of the Rectangle: ";
                    cin >> l;
                    cout << endl;
                    cout << "Enter the Width of the Rectangle: ";
                    cin >> w;
                    cout << endl;
                    cout << endl;

                    p = 2 * (l + w);
                    cout << "The Perimeter of the Rectangle is: "<< p<< " meter"<< endl;
                    cout << endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Perimeter of a Rectangle :"<< endl;
                    cout << endl;
                    cout << "2 * (l + w)"<< endl;
                    cout << endl;
                    cout << "2 * ("<< l << " + "<< w << ") = " << p << " meter"<< endl;

                }

                else if (option == 5){
                    int a, p;

                    cout << "Enter the Side of the Rhombus: ";
                    cin >> a;
                    cout << endl;
                    cout << endl;
                    p =  a + a + a + a;

                    cout << "The Perimeter of the Rhombus is: "<< p<< " meter"<< endl;
                    cout << endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Perimeter of a Rhombus:"<< endl;
                    cout << endl;
                    cout << "a + a + a + a"<< endl;
                    cout << endl;
                    cout << a << " + " << a << " + " << a << " + " << a << " = "<< p << " meter" << endl;

                }

                else if (option == 6 ) {
                    float bl, sl, p;

                    cout << "Enter the Base Length of the Parallelogram: ";
                    cin >> bl;
                    cout << endl;
                    cout << "Enter the side Length of the Parallelogram: ";
                    cin >> sl;
                    cout << endl;
                    cout << endl;

                    p = 2 * (bl + sl);
                    cout << "The Perimeter of the Parallelogram is: "<< p<< " meter"<< endl;
                    cout << endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Perimeter of a Parallelogram :"<< endl;
                    cout << endl;
                    cout << "2 * (bl + sl)"<< endl;
                    cout << "bl (Base Length), sl (Side Length)"<< endl;
                    cout << endl;
                    cout << "2 * ("<< bl << " + "<< sl << ") = " << p << " meter"<< endl;

                }

                else if (option == 7) {
                int a, b, c, d, p;

                    cout << "Enter the Side of the Trapezoid: ";
                    cin >> a;
                    cout << endl;
                    cout << "Enter the Side of the Trapezoid: ";
                    cin >> b;
                    cout << endl;
                    cout << "Enter the Side of the Trapezoid: ";
                    cin >> c;
                    cout << endl;
                    cout << "Enter the Side of the Trapezoid: ";
                    cin >> d;
                    cout << endl;
                    cout << endl;
                    p =  a + b + c + d;

                    cout << "The Perimeter of the Trapezoid is: "<< p<< " meter"<< endl;
                    cout << endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Perimeter of a Trapezoid:"<< endl;
                    cout << endl;
                    cout << "a + b + c + d"<< endl;
                    cout << endl;
                    cout << a << " + " << b << " + " << c << " + " << d << " = "<< p << " meter" << endl;
                }

                else {

                    cout << "You Entered Invalid Character or Choice"<< endl;

                }



                cout << "\nDo you want to Try another set? Y/N: ";
                cin >> ruway;
            }while (x == 'Y' || x == 'y');
        }


        // Area
        else if (choice == 3){
            char x;
            int option;

            do {

                cout <<"\t\tChoose The Area You Want to Find:  \n\n";
                cout << "\t[1] Area of A Circle \n";
                cout << "\t[2] Area of A Triangle \n";
                cout << "\t[3] Area of A Square \n";
                cout << "\t[4] Area of A Rectangle \n";
                cout << "\t[5] Area of A Rhombus \n";
                cout << "\t[6] Area of A Parallelogram \n";
                cout << "\t[7] Area of A Trapezoid \n";
                cout << "\t[8] Area of A Ellipse \n";
                cout << endl;
                cout << "\tSelect Your Choice : ";
                cin >> option;
                cout << endl;


                // Area of A Circle
                if (option == 1){

                    float radius, area;

                    cout << "Enter the Radius of Circle: ";
                    cin>> radius;
                    cout << endl;

                    // Calculating the Area of circle
                    area = 3.14 * radius * radius;
                    cout << "Area of Circle with Radius of " << radius << " is "<< area<< " square units"<< endl;
                    cout << endl;
                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Area of a Circle:"<< endl;
                    cout << endl;
                    cout << "pi*r^2"<< endl;
                    cout << endl;
                    cout << "3.14 * "<< radius<< " * "<< radius<< " = "<< area<< " square units" <<endl;

                }
                // Area of A Triangle
                else if (option == 2){
                    float height, base, area;

                    cout << "Enter the the Height of the Triangle: ";
                    cin>> height;
                    cout << endl;

                    cout << "Enter the the Base of the Triangle: ";
                    cin>> base;
                    cout << endl;

                    // Calculating the Area of Triangle
                    area = 0.5 * base * height ;

                    cout << "The Area of the Triangle is: "<< area<< " Square units"<<endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Area of a Triangle:"<< endl;
                    cout << endl;
                    cout << "1/2 b * h "<< endl;
                    cout << endl;
                    cout << "1/2 * "<< base<< " * " << height<< " = " << area<< " square units"<< endl;

                }

                // Area of Square
                else if (option == 3){

                    float square_side, area;
                    cout << "Enter the side of Square: ";
                    cin >> square_side;
                    cout << endl;

                    // Calculating the Area of Square
                    area = square_side * square_side;

                    cout << "The area of Square are: "<< area<< " square units"<< endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Area of a Square:"<< endl;
                    cout << endl;
                    cout << "S^2"<< endl;
                    cout << endl;
                    cout << square_side<< " * "<< square_side<< " = " << area<< " square units"<< endl;
                }

                // Area of Rectangle
                else if (option == 4 ){

                    float length, width, area;

                    cout << "Enter the Length of the Rectangle: ";
                    cin>> length;
                    cout << endl;
                    cout << "Enter the Width of the Rectangle: ";
                    cin>> width;
                    cout << endl;

                    // Calculating the Area of Rectangle
                    area = length * width;

                    cout << "The Area of the Rectangle is: " << area<< " square units" << endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Area of a Rectangle:"<< endl;
                    cout << endl;
                    cout << "l*w"<< endl;
                    cout << endl;
                    cout << length<< " * " << width<< " = " << area << " square units"<<endl;

                }

                // Area of Rhombus

                else if (option == 5){

                    float d1, d2, area;

                    cout << "Enter the Length of the first diagonal: ";
                    cin>> d1;
                    cout << endl;
                    cout << "Enter the Length of the second diagonal: ";
                    cin>> d2;
                    cout << endl;

                    // Calculating the Area of
                    area = 0.5 * d1 * d2;


                    cout << "The area of Rhombus is: " << area<< " square units" << endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Area of a Rhombus:"<< endl;
                    cout << endl;
                    cout << "1/2 * d1 * d2"<< endl;
                    cout << endl;
                    cout << "1/2 * "<< d1 << " * " << d2 << " = " << area << " sqaure units"<< endl;

                }

                // Area of Parallelogram
                else if (option	== 6){

                    float base, height, area;

                    cout << "Enter the Base of the Parallelogram: ";
                    cin>> base;
                    cout << endl;
                    cout << "Enter the Height of the Parallelogram: ";
                    cin>> height;
                    cout << endl;

                    // Calculating the Area of Parallelogram
                    area = base * height;

                    cout << "The Area of Parallelogram is: "<< area<< " square units"<< endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Area of a Parallelogram:"<< endl;
                    cout << endl;
                    cout << "b*h"<< endl;
                    cout << endl;
                    cout << base<< " * "<< height<< " = "<< area<< " square units"<< endl;
                }

                // Area of Trapezoid
                else if (option == 7){

                    float a, b, height, area;

                    cout << "Enter Base 1 of the Trapezoid: ";
                    cin>> a;
                    cout << endl;
                    cout << "Enter Base 2 of the Trapezoid: ";
                    cin>> b;
                    cout << endl;
                    cout << "Enter the Height of the Trapezoid: ";
                    cin>> height;
                    cout << endl;

                    // Calculating the Area of Rectangle
                    area = 0.5 * (a + b) * height;

                    cout <<"The Area of the Trapezoid is: " << area<< " square units"<< endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Area of a Trapezoid:"<< endl;
                    cout << endl;
                    cout << "1/2 (a + b)h"<< endl;
                    cout << endl;
                    cout << "1/2 * (" << a << " + "<< b<< ") * "<< height<< " = "<< area<< " square units"<< endl;

                }

                // Area of Ellipse
                else if(option == 8){

                    float a, b, area;

                    cout << "Enter the radius of the major Axis: ";
                    cin>> a;
                    cout << endl;
                    cout << "Enter the radius of the minor Axis: ";
                    cin>> b;
                    cout << endl;

                    // Calculating the Area of Ellipse
                    area = 3.14 * a * b;

                    cout << "The Area of the Ellipse is: "<< area<< endl;
                    cout << endl;

                    cout << "Solution"<< endl;
                    cout << endl;
                    cout << "Formula of Area of a Ellipse:"<< endl;
                    cout << endl;
                    cout << "pi * a * b "<< endl;
                    cout << endl;
                    cout << "3.14 * "<< a << " * "<< b<< " = " << area << " square units"<< endl;

                }

                else {

                    cout << "You Entered Invalid Character or Choice"<< endl;

                }

                cout << "\nDo you want to Try another set? Y/N: ";
                cin >> x;
            }while (x == 'Y' || x == 'y');



        }

        // Surface Area
        else if (choice == 4){

            char x;
            int option;
            do{
                cout <<"\tChoose Lateral Surface Area (LSA) and Total Surface Area (TSA) You Want to Find:  \n\n";
                cout << "\t[1] Lateral Surface Area (LSA) and Total Surface Area (TSA) of Cuboid \n";
                cout << "\t[2] Lateral Surface Area (LSA) and Total Surface Area (TSA) of Cube \n";
                cout << "\t[3] Lateral Surface Area (LSA) and Total Surface Area (TSA) of Rigth Circular Cylinder \n";
                cout << "\t[4] Lateral Surface Area (LSA) and Total Surface Area (TSA) of Rigth Circular Cone \n";
                cout << "\t[5] Lateral Surface Area (LSA) and Total Surface Area (TSA) of Solid Sphere\n";
                cout << "\t[6] Lateral Surface Area (LSA) and Total Surface Area (TSA) of Hemisphere\n";
                cout << endl;
                cout << "\tSelect Your Choice : ";
                cin >> option;
                cout << endl;

                // Lateral Surface Area (LSA) and Total Surface Area (TSA) of Cuboid
                if (option == 1) {

                    float l, b, h, lsa, tsa;

                    cout << "Enter the Lenght of the Cuboid in meter: ";
                    cin>>l;
                    cout << endl;
                    cout << "Enter the Breadth of the Cuboid in meter: ";
                    cin>>b;
                    cout << endl;
                    cout << "Enter the Height of the Cuboid in meter: ";
                    cin>>h;
                    cout << endl;
                    cout << endl;

                    // Calculating the Lateral Surface Area of Cuboid

                    lsa = 2 * h * (l + b);

                    cout << "\tLateral Surface Area (LSA) of Cuboid \n";
                    cout << endl;
                    cout << endl;
                    cout << "The Lateral Surface Area of Cuboid is: "<< lsa << " square meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Lateral Surface Area of Cuboid:"<< endl;
                    cout << endl;
                    cout << "2h(l + b)"<< endl;
                    cout << endl;
                    cout << "2 * "<< h<< " * ("<< l<< " + "<< b<< ")"<< " = "<< lsa<< " square meter"<< endl;
                    cout << endl;
                    cout << endl;

                    //Calculating the Total Surface Area (TSA) of Cuboid
                    tsa = 2 * (l*b + b*h + l*h);
                    cout << "\tTotal Surface Area (TSA) of Cuboid \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Total Surface Area (TSA) of Cuboid is: "<< tsa<< " square units"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of The Total Surface Area (TSA) of Cuboid:"<< endl;
                    cout << endl;
                    cout << "2(lb + bh + lh)"<< endl;
                    cout << endl;
                    cout << "2 * ("<<l<< " * "<< b << " + "<<b<< " * "<<h<< " + " <<l<< " * "<<h<< ") = "<< tsa<< " square units"<< endl;

                }

                //Lateral Surface Area (LSA) and Total Surface Area (TSA) of Cube
                else if (option == 2) {

                    float a, lsa, tsa;

                    cout << "Enter the side of the Cube in meters: ";
                    cin >> a;
                    cout << endl;

                    // Calculating the Lateral Surface Area of Cube
                    lsa = 4 * (a * a);
                    cout << "\tLateral Surface Area (LSA) of Cube \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Lateral Surface Area (LSA) Cube is: " << lsa << " square meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Lateral Surface Area of Cube:"<< endl;
                    cout << endl;
                    cout << "4(a^2)"<< endl;
                    cout << endl;
                    cout << "4 * (" << a<< " * "<< a<< ") = "<< lsa << " square meter"<< endl;
                    cout << endl;
                    cout << endl;

                    // Calculating Total Surface Area (TSA) of Cube
                    tsa = 6 * (a * a);
                    cout << "\tTotal Surface Area (TSA) of Cube \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Total Surface Area (TSA) of Cube is: "<< tsa<< " square units"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of The Total Surface Area (TSA) of Cuboid:"<< endl;
                    cout << endl;
                    cout << "6 * (a^2)"<< endl;
                    cout << endl;
                    cout << "6 * ("<<a<< " * "<<a<< ") = "<<tsa<< " square units"<< endl;

                }

                // Lateral Surface Area (LSA) and Total Surface Area (TSA) of Rigth Circular Cylinder

                else if(option == 3){

                    float r, h, lsa,tsa;

                    cout << "Enter the Radius of the Right Circular Cylinder: ";
                    cin>> r;
                    cout << endl;
                    cout << endl;
                    cout << "Enter the Height of the Right Circular Cylinder: ";
                    cin>> h;
                    cout << endl;

                    //Calculating the Lateral Surface Area of Rigth Circular Cylinder
                    lsa = 2 * 3.14 * r * h;

                    cout << "\tLateral Surface Area (LSA) of Rigth Circular Cylinder \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Lateral Surface Area (LSA) of Rigth Circular Cylinder is: "<< lsa << " square meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Lateral Surface Area (LSA) of Rigth Circular Cylinder"<< endl;
                    cout << endl;
                    cout << "2 * pi * r * h"<< endl;
                    cout << endl;
                    cout << "2 * 3.14 * "<< r << " * "<< h << " = " << lsa<< " square meter"<< endl;
                    cout << endl;
                    cout << endl;

                    //Calculating the Total Surface Area (TSA) of Rigth Circular Cylinder
                    tsa = 2 * 3.14 * r * (r + h);

                    cout << "\tTotal Surface Area (TSA) of Rigth Circular Cylinder \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Total Surface Area (TSA) of Rigth Circular Cylinder is: "<< tsa<< " square units"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of The Total Surface Area (TSA) of Rigth Circular Cylinder:"<< endl;
                    cout << endl;
                    cout << "2 * pi * r * (r + h)"<< endl;
                    cout << endl;
                    cout << "2 * 3.14 * "<< r << " * (" << r<< " + "<< h << ") = "<< tsa << " square units"<< endl;


                }

                // Lateral Surface Area (LSA) and Total Surface Area (TSA) of Rigth Circular Cone

                else if (option == 4) {

                    float l, r, lsa , tsa;

                    cout << "Enter the Length of the Right Circular Cone in meters: ";
                    cin>> l;
                    cout << endl;
                    cout << endl;
                    cout << "Enter the Radius of the Rigth Circular Cone in meters: ";
                    cin >> r;
                    cout << endl;

                    //Calculating the Lateral Surface Area of Rigth Circular
                    lsa = 3.14 * r * l;

                    cout << "\tLateral Surface Area (LSA) of Rigth Circular Cone \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Lateral Surface Area (LSA) of Rigth Circular Cone is: "<< lsa << " square meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Lateral Surface Area (LSA) of Rigth Circular Cone"<< endl;
                    cout << endl;
                    cout << "pi * r * l"<< endl;
                    cout << endl;
                    cout << "3.14 * "<< r<< " * "<< l << " = "<< lsa<< " square meter" << endl;
                    cout << endl;
                    cout << endl;

                    //Calculating the Total Surface Area (TSA) of Rigth Circular Cone
                    tsa = 3.14 * r * (l + r);

                    cout << "\tTotal Surface Area (TSA) of Rigth Circular Cone \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Total Surface Area (TSA) of Rigth Circular Cone is: "<< tsa<< " square units"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of The Total Surface Area (TSA) of Rigth Circular Cone:"<< endl;
                    cout << endl;
                    cout << "pi * r * (l + r);"<< endl;
                    cout << endl;
                    cout << "3.14 * " << r << " * ("<<l<< " + "<< r<< ") = " << tsa << " square units"<< endl;

                }

                // Lateral Surface Area (LSA) and Total Surface Area (TSA) of Solid Sphere
                else if (option == 5 ) {

                    float r, lsa , tsa;

                    cout << "Enter the Radius of the Solid Sphere in meters: ";
                    cin >> r;
                    cout << endl;
                    cout << endl;

                    //Calculating the Lateral Surface Area of Solid Sphere
                    lsa = 4 * 3.14 * r * r;

                    cout << "\tLateral Surface Area (LSA) of Rigth Solid Sphere \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Lateral Surface Area (LSA) of Solid Sphere is: "<< lsa << " square meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Lateral Surface Area (LSA) of Solid Sphere"<< endl;
                    cout << endl;
                    cout << "4 * pi * r^2"<< endl;
                    cout << endl;
                    cout << "4 * 3.14 * " << r<< " * "<< r<< " = "<< lsa << " square meter"<< endl;
                    cout << endl;
                    cout << endl;

                    //Calculating the Total Surface Area (TSA) of Solid Sphere
                    tsa = 4 * 3.14 * r * r;

                    cout << "\tTotal Surface Area (TSA) of Rigth Solid Sphere \n";
                    cout << endl;
                    cout << endl;

                    cout << "Total Surface Area (TSA) of Solid Sphere is: "<< lsa << " square meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Total Surface Area (TSA) of Solid Sphere"<< endl;
                    cout << endl;
                    cout << "4 * pi * r^2"<< endl;
                    cout << endl;
                    cout << "4 * 3.14 * " << r<< " * "<< r<< " = "<< lsa << " square units"<< endl;

                }

                else if (option == 6) {

                    float r, lsa, tsa;

                    cout << "Enter the Radius of the Hemisphere in meter: ";
                    cin>> r;
                    cout << endl;
                    cout << endl;

                    //Calculating the Lateral Surface Area of Hemispher
                    lsa = 0.5 * 4 * 3.14 * r * r;

                    cout << "\tLateral Surface Area (LSA) of Rigth Hemispher \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Lateral Surface Area (LSA) of Hemispher is: "<< lsa << " square meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Lateral Surface Area (LSA) of Hemispher"<< endl;
                    cout << endl;
                    cout << "1/2 * 4 * pi * r^2"<< endl;
                    cout << endl;
                    cout << "1/2 * 4 * 3.14 * "<< r<< " * "<< r<< " = "<< lsa << " square meter"<< endl;
                    cout << endl;
                    cout << endl;

                    //Calculating the Total Surface Area (TSA) of Hemispher
                    tsa = 3 * 3.14 * r * r;

                    cout << "\tTotal Surface Area (TSA) of Rigth Hemispher \n";
                    cout << endl;
                    cout << endl;

                    cout << "Total Surface Area (TSA) of Hemispher is: "<< lsa << " square meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Total Surface Area (TSA) of Hemispher"<< endl;
                    cout << endl;
                    cout << "3 * pi * r^2"<< endl;
                    cout << endl;
                    cout << "3 * 3.14 * "<< r<< " * "<< r<< " = "<< tsa<< " square units"<< endl;

                }

                else
                {
                    cout << "You Entered Invalid Choice!!"<< endl;
                }


                cout << "\nDo you want to Try another set? Y/N: ";
                cin >> x;
            }while (x == 'Y' || x == 'y');


        }

        if (choice == 5) {

            int option;
            char x;

            do {

                int option;
                cout <<"\t\tChoose The Area You Want to Find:  \n\n";
                cout << "\t[1] Volume of Rectangular Cuboid \n";
                cout << "\t[2] Volume of A Cube \n";
                cout << "\t[3] Volume of A Cylinder \n";
                cout << "\t[4] Volume of A Prism \n";
                cout << "\t[5] Volume of A Sphere \n";
                cout << "\t[6] Volume of A Pyramid \n";
                cout << "\t[7] Volume of A Rigth Circular Cone \n";
                cout << "\t[8] Volume of A Rectangular Pyramid \n";
                cout << "\t[9] Volume of A Ellipsiod \n";
                cout << endl;
                cout << "\tSelect Your Choice : ";
                cin >> option;
                cout << endl;

                // Volume of Rectangular or Solid Cuboid
                if (option == 1){

                    float l, w, h, v;

                    cout << "Enter the Length of the Rectangular or Solid Cuboid: ";
                    cin >> l;
                    cout << endl;
                    cout << "Enter the Width of the Rectangular or Solid Cuboid: ";
                    cin >> w;
                    cout << endl;
                    cout << "Enter the Height of the Rectangular or Solid Cuboid: ";
                    cin >> h;
                    cout << endl;

                    // Calculating the Volume of Rectangular or Solid Cuboid
                    v = l * w * h;

                    cout << "\tVolume of Rectangular or Solid Cuboid \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Volume of Rectangular or Solid Cuboid: "<< v << " cubic meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Volume of Rectangular or Solid Cuboid"<< endl;
                    cout << endl;
                    cout << "V = l * w * h"<< endl;
                    cout << endl;
                    cout << "V = "<< l << " * "<< w << " * "<< h << " = "<< v << " cubic meter"<< endl;

                }

                //Volume of A Cube

                else if (option == 2) {

                    float a, v;

                    cout << "Enter the Length of Edge or Sides: ";
                    cin>> a;
                    cout << endl;
                    cout << endl;
                    // Calculating the Volume of Cube
                    v = a * a * a;

                    cout << "\tVolume of Cube \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Volume of Cube: "<< v << " cubic meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Volume of Cube"<< endl;
                    cout << endl;
                    cout << "V = a^3"<< endl;
                    cout << endl;
                    cout << "V = "<< a<< " * "<< a << " * "<< a << " = "<< v << " cubic meter"<< endl;

                }

                //Volume of A Cylinder

                else if (option == 3) {

                    float r, h, v;

                    cout << "Enter the Radius of the Circular Base: ";
                    cin >> r;
                    cout << endl;
                    cout << "Enter the Height of the Cylinder: ";
                    cin>> h;
                    cout << endl;
                    cout << endl;

                    // Calculating the Volume of Cylinder
                    v = 3.14 * r * r * h;

                    cout << "\tVolume of Cylinder \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Volume of Cylinder: "<< v << " cubic meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Volume of Cylinder"<< endl;
                    cout << endl;
                    cout << "V = pi * r^2 * h"<< endl;
                    cout << endl;
                    cout << "V = 3.14 * "<< r << " * "<< r << " * "<< h<< " = "<< v << " cubic meter"<< endl;

                }

                //Volume of A Prism

                if (option == 4) {

                    float b, h, v, l, w;

                    cout << "In order to Find the Volume of Prism you need to find first the base area."<< endl;
                    cout << endl;
                    cout << endl;
                    cout << "Enter the Lenght: ";
                    cin >> l;
                    cout << endl;
                    cout << "Enter the Width: ";
                    cin >> w;
                    cout << endl;
                    b = l * w;
                    cout << "The base of the Prism is: "<< b<< " square units" <<endl;
                    cout << endl;
                    cout << endl;
                    cout << "Enter the Height of the Prism: ";
                    cin >> h;
                    cout << endl;
                    cout << endl;

                    // Calculating the Volume of Prism
                    v = b * h;

                    cout << "\tVolume of Prism \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Volume of Prism: "<< v << " cubic meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Volume of Prism"<< endl;
                    cout << endl;
                    cout << "V = B * h"<< endl;
                    cout << endl;
                    cout << "V = "<< b << " * "<< h << " = "<< v << " cubic meter"<< endl;

                }

                //Volume of A Sphere

                else if (option  == 5 ) {

                    float r, v;

                    cout << "Enter the Radius of the Sphere: ";
                    cin >> r;
                    cout << endl;
                    cout << endl;
                    // Calculating the Volume of Sphere
                    v = 1.33333333333 * 3.14 * r * r * r;

                    cout << "\tVolume of Sphere \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Volume of Sphere: "<< v << " cubic meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Volume of Sphere"<< endl;
                    cout << endl;
                    cout << "V = (4/3) pi * r^3"<< endl;
                    cout << endl;
                    cout << "V = (4/3) * 3.14 * "<< r << " * "<< r << " * "<< r << " = "<< v << " cubic meter"<< endl;

                }

                //Volume of A Pyramid

                else if (option == 6) {

                    float b, s, h, v;
                    cout <<"In order to find the Volume of A Pyramid, we need to find first the Base area of the pyramid: "<< endl;
                    cout << endl;
                    cout << endl;
                    cout << "Enter the Base Square Area: ";
                    cin >> s;
                    cout << endl;
                    b = s * s;
                    cout << "The base of the Pyramid is: "<< b<< " square units" <<endl;
                    cout << endl;
                    cout << endl;
                    cout << "Enter the Height of the Pyramid: ";
                    cin >> h;
                    cout << endl;
                    cout << endl;

                    // Calculating the Volume of Pyramid
                    v = 0.33333333333 * b * h;

                    cout << "\tVolume of Pyramid \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Volume of Pyramid: "<< v << " cubic meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Volume of Pyramid"<< endl;
                    cout << endl;
                    cout << "V = 1/3 * B * h"<< endl;
                    cout << endl;
                    cout << "V = 1/3 * "<< b << " * "<< h << " = "<< v << " cubic meter"<< endl;

                }

                //Volume of A Rigth Circular Cone

                if (option == 7) {

                    float r, h, v;

                    cout << "Enter the Radius of Rigth Circular Cone: ";
                    cin>> r;
                    cout << endl;
                    cout << "Enter the Height of Rigth Circular Cone: ";
                    cin>> h;
                    cout << endl;
                    cout << endl;

                    // Calculating the Volume of Rigth Circular Cone
                    v = 0.33333333333 * 3.14 * r * r * h;

                    cout << "\tVolume of Rigth Circular Cone \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Volume of Rigth Circular Cone: "<< v << " cubic meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Volume of Rigth Circular Cone"<< endl;
                    cout << endl;
                    cout << "V = (1/3) pi* r^2 * h"<< endl;
                    cout << endl;
                    cout << "V = (1/3) * 3.14 * "<< r<< " * " << r << " * "<< h << " = "<< v << " cubic meter"<< endl;

                }

                // Volume of A Rectangular Pyramid

                else if (option = 8) {

                    float l, w, h, v;

                    cout << "Enter the Length of the Base: ";
                    cin >> l ;
                    cout << endl;
                    cout << "Enter the Width of the Base: ";
                    cin >> w ;
                    cout << endl;
                    cout << "Enter the Heigth of the Base: ";
                    cin >> h ;
                    cout << endl;
                    cout << endl;

                    // Calculating the Volume of Rectangular Pyramid
                    v = 0.33333333333 * l * w * h;

                    cout << "\tVolume of Rectangular Pyramid \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Volume of Rectangular Pyramid: "<< v << " cubic meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Volume of Rectangular Pyramid"<< endl;
                    cout << endl;
                    cout << "V = (1/3) * l * w * h"<< endl;
                    cout << endl;
                    cout << "V = (1/3) * "<< l << " * "<< w << " * "<< h << " = "<< v << " cubic meter"<< endl;
                }

                //Volume of A Ellipsiod

                if (option == 9) {

                    float a, b, c, v;

                    cout << "Enter the semi-axis of an Ellipsiod: ";
                    cin >> a;
                    cout << endl;
                    cout << "Enter the semi-axis of an Ellipsiod: ";
                    cin >> b;
                    cout << endl;
                    cout << "Enter the semi-axis of an Ellipsiod: ";
                    cin >> c;
                    cout << endl;
                    cout << endl;

                    // Calculating the Volume of Ellipsiod
                    v = 1.33333333333 * 3.14 * a * b * c;

                    cout << "\tVolume of Ellipsiod \n";
                    cout << endl;
                    cout << endl;

                    cout << "The Volume of Ellipsiod: "<< v << " cubic meter"<< endl;
                    cout << endl;

                    cout << "\tSolution"<< endl;
                    cout << endl;
                    cout << "Formula of Volume of Ellipsiod"<< endl;
                    cout << endl;
                    cout << "V = (4/3) * pi * a * b * c"<< endl;
                    cout << endl;
                    cout << "V = (4/3) * 3.14 * "<< a<< " * "<< b << " * "<< c<< " = "<< v << " cubic meter"<< endl;
                }

                else {
                    cout << "You Entered invalid Choice"<< endl;
                }

                cout << "\nDo you want to Try another set? Y/N: ";
                cin >> x;
            }while (x == 'Y' || x == 'y');
        }


        // Sequence
        else if (choice == 6){

            char x;
            int option;

            do {

                int option;
                cout <<"\t\tChoose The Sequence you want to Find:  \n\n";
                cout << "\t[1] Arithmetic Sequence \n";
                cout << "\t[2] Geometric Sequence \n";
                cout << "\t[3] Fibonnaci Sequence \n";
                cout << endl;
                cout << "\tSelect Your Choice : ";
                cin >> option;
                cout << endl;

                // Arithmetic Sequence

                if(option == 1) {

                        cout << "\tArithmetic Sequence Formula: "<< endl;
                        cout << endl;
                        cout << "\tAn = A1 + (n - 1) d "<< endl;
                        cout << endl;
                        cout << "\tSn = n/2  [2a + (n-1) d]"<< endl;
                        cout << endl;
                        cout << endl;
                        cout << "\tWhere,"<< endl;
                        cout << endl;
                        cout << "\tAn = nth term"<< endl;
                        cout <<endl;
                        cout << "\tA1 = 1st term"<< endl;
                        cout << endl;
                        cout << "\tn = number of terms"<< endl;
                        cout << endl;
                        cout << "\tSn = Sum of n Terms"<< endl;
                        cout << endl;
                        cout << "\td = common difference"<< endl;
                        cout << endl;
                        cout << endl;

                    char x;
                    int option;


                    do {

                        int option;
                        cout <<"\t\tArithmetic Sequence Formulas:  \n\n";
                        cout << "\t[1] Finding the nth Term \n";
                        cout << "\t[2] Finding the sum of the Arithmetic Sequence  \n";
                        cout << endl;
                        cout << endl;
                        cout << "\tSelect Your Choice : ";
                        cin >> option;
                        cout << endl;

                        if (option ==1){
                            int nth, first_term, term, d, An;

                            cout << "Enter the firt term: ";
                            cin>> first_term;
                            cout << endl;
                            cout << "Enter the Common Difference: ";
                            cin>> d;
                            cout << endl;
                            cout << "Enter the nth term: ";
                            cin>> nth;
                            cout << endl;


                            // finding the nth term
                            An = first_term + (nth - 1) * d;

                            cout << "The nth term is "<< An << endl;
                            cout << endl;
                            cout << endl;
                            cout <<"\tSolution: "<< endl;
                            cout << endl;
                            cout << "An = A1 + (n - 1) d "<< endl;
                            cout << endl;
                            cout << "An = "<< first_term<< " + ("<< nth<< " - 1) * "<< d<< endl;
                            cout << "An = "<< first_term<< " + ("<< nth - 1<< ") * "<< d<< endl;
                            cout << "An = "<< first_term<< " + "<< (nth - 1) * d << endl;
                            cout << "An = "<< An<< endl;

                        }

                        else if (option == 2){
                            float n, a, d, Sn, An;

                            cout << "Enter the first term: ";
                            cin >> a;
                            cout << endl;
                            cout << "Enter the how many terms: ";
                            cin >> n;
                            cout << endl;
                            cout << "Enter the Common Difference: ";
                            cin >> d;
                            cout << endl;
                            cout << endl;

                            // finding the sum
                            An = 2 * a + (n - 1) * d;
                            Sn = n / 2 * An;

                            cout << "The Sum of the Arithmetic Sequence is: "<< Sn<< endl;
                            cout << endl;
                            cout << endl;
                            cout <<"\tSolution: "<< endl;
                            cout << endl;
                            cout << "Sn = n/2  [2a + (n-1) d]"<< endl;
                            cout << endl;
                            cout << "Sn = "<< n<< "/2 [2 * "<< a<< " + ("<< n << "-1) * "<<d<<"]"<< endl;
                            cout << "Sn = ("<< n<< "/2)"<< "["<< 2 * a<< " + "<< n - 1<< " * "<< d<< "]" <<endl;
                            cout << "Sn = ("<< n<< "/2) * "<< An<< endl;
                            cout << "Sn = "<< Sn<< endl;

                        }

                        cout << "\nDo you want to Try another set? Y/N: ";
                        cin >> x;
                    }while (x == 'Y' || x == 'y');

                }

                //Geometric Sequence

                else if(option == 2) {

                        cout << "\tGeometric Sequence Formula: "<< endl;
                        cout << endl;
                        cout << "\tAn =  ar^n-1"<< endl;
                        cout << endl;
                        cout << "\tSn = a (1 - r^n) / (1 -r)"<< endl;
                        cout << endl;
                        cout << endl;
                        cout << "\tWhere,"<< endl;
                        cout << endl;
                        cout << "\tAn = nth term"<< endl;
                        cout <<endl;
                        cout << "\tA1 = 1st term"<< endl;
                        cout << endl;
                        cout << "\tn = number of terms"<< endl;
                        cout << endl;
                        cout << "\tSn = Sum of n Terms"<< endl;
                        cout << endl;
                        cout << "\tr = common ratio"<< endl;
                        cout << endl;
                        cout << endl;

                    char x;
                    int option;

                    do {

                        int option;
                        cout <<"\t\tGeometric Sequence Formulas:  \n\n";
                        cout << "\t[1] Finding the nth Term \n";
                        cout << "\t[2] Finding the sum of the Geometric Sequence  \n";
                        cout << endl;
                        cout << endl;
                        cout << "\tSelect Your Choice : ";
                        cin >> option;
                        cout << endl;

                        if (option == 1) {

                            float r, a, n, An;

                            cout << "Enter the first term: ";
                            cin>> a;
                            cout << endl;
                            cout << "Enter the Common Ratio: ";
                            cin>> r;
                            cout << endl;
                            cout << "Enter the nth term: ";
                            cin>>n;
                            cout << endl;
                            cout << endl;

                            // finding the nth term
                            An = a * pow(r, n-1);

                            cout << "The nth term is "<< An << endl;
                            cout << endl;
                            cout << endl;
                            cout <<"\tSolution: "<< endl;
                            cout << endl;
                            cout << "An =  ar^n-1"<< endl;
                            cout << endl;
                            cout << "An = "<< a<< "("<< r<< ")^"<< n <<"-1"<<endl;
                            cout << "An = "<< a << " * "<< r<< "^"<< n-1<< endl;
                            cout << "An = "<< An<< endl;

                        }

                        // Sum of the Geometric Sequece
                        else if (option == 2) {

                            float a, r, n, Sn;

                            cout << "Enter the first term: ";
                            cin>> a;
                            cout << endl;
                            cout << "Enter the Common Ratio: ";
                            cin>> r;
                            cout << endl;
                            cout << "Enter the nth term: ";
                            cin>>n;
                            cout << endl;
                            cout << endl;

                            // Sum of the geometric sequence
                            Sn = a * (1 - pow(r, n)) / (1-r);

                            cout << "The Sum of the Geometric Sequece is: "<< Sn<< endl;
                            cout << endl;
                            cout << endl;
                            cout <<"\tSolution: "<< endl;
                            cout << endl;
                            cout << "Sn = a (1 - r^n) / (1 -r )"<< endl;
                            cout << endl;
                            cout<< "Sn = "<< a << " * (1 - "<<r<< "^"<< n<< ") / (1 - "<<r<<  ")"<< endl;
                            cout << "Sn = "<< Sn<< endl;

                        }

                        else {
                            cout << "You Entered Invalid Choice: "<< endl;
                        }

                        cout << "\nDo you want to Try another set? Y/N: ";
                        cin >> x;
                    }while (x == 'Y' || x == 'y');
                }

                // Fibonacci Sequence

                else if (option == 3) {

                    char x;
                    int option;

                    do {
                        int option;
                                
                        int n, t1 = 0, t2 = 1, nextTerm = 0;

                        cout << "Enter the number of terms: ";
                        cin >> n;
                        cout <<endl;
                        cout << "Fibonacci Series: ";
                        for (int i = 1; i <= n; ++i) {
                        // Prints the first two terms.
                            if(i == 1) {
                                cout << t1 << ", ";
                                continue;
                            }
                            if(i == 2) {
                                cout << t2 << ", ";
                                continue;
                            }
                            nextTerm = t1 + t2;
                            t1 = t2;
                            t2 = nextTerm;
                                    
                            cout << nextTerm << ", ";
                        }
               
                        cout << "\nDo you want to Try another set? Y/N: ";
                        cin >> x;
                    }while (x == 'Y' || x == 'y');

                }



                cout << "\nDo you want to Try another set? Y/N: ";
                cin >> x;
            }while (x == 'Y' || x == 'y');
        }

        cout << "\nDo You want to Try another set? Y/N: ";
        cin >> ruway;
    } while (ruway == 'Y' || ruway == 'y');

}
