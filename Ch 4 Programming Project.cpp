// Ch 4 Programming Project.cpp : 

#include <iostream> 

using namespace std;

// Function to check if a year is a leap year  
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month  
int getDaysInMonth(int month, int year)
{
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
        break;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return -1;//Invalid month  
    }
}

int main()
{
    int month, year;

    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    int days = getDaysInMonth(month, year);

    if (days == -1)
    {
        cout << "That's not a real month!" << endl;
    }
    else if (year <= -1)
    {
        cout << "Is that BCE?\n";
    }
    else
    {
        if (month == 1)
        {
            cout << "The number of days in the " << month << "st month of year " << year << " is: " << days << endl;
        }
        else if (month == 2)
        {
            cout << "The number of days in the " << month << "nd month of year " << year << " is: " << days << endl;
        }
        else if (month == 3)
        {
            cout << "The number of days in the " << month << "rd month of year " << year << " is: " << days << endl;
        }
        else
        {
            cout << "The number of days in the " << month << "th month of year " << year << " is: " << days << endl;
        }
    }
    return 0;
}