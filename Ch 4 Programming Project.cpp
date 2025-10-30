// Ch 4 Programming Project.cpp : Geometry Calculator
#include <iostream> 
#include <cmath> 
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;
    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) 
    {
        //Area of a Circle 
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        //Input validation
        if (radius <= 0) 
        {
            cout << "Radius cannot be negative.\n";
        }
        else {
            double area = PI * pow(radius, 2);
            cout << "The area of the circle is: " << area << endl;
        }
    }
    else if (choice == 2) 
    {
        //Area of a Rectangle 
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        //Input validation
        if (length <= 0 || width <= 0) 
        {
            cout << "Length and width cannot be less than or equal to zero.\n";
        }
        else 
        {
            double area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
        }
    }
    else if (choice == 3) 
    {
        //Area of a Triangle 
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        //input validation, 
        if (base <= 0 || height <= 0) 
        {
            cout << "Base and height cannot be less than or equal to zero.\n";
        }
        else 
        {
            double area = 0.5 * base * height;
            cout << "The area of the triangle is: " << area << endl;
        }
    }
    else if (choice == 4) 
    {
        //Quit 
        cout << "Winners never quit and quitters never win.\n";
    }
    else 
    {
        //Invalid choice 
        cout << "Is " << choice << " between 1-4? No?\n";
    }

    return 0;
}
