// Ch 4 Programming Project.cpp : Shipping Cost

#include <iostream>  

using namespace std;

int main()
{
    double weight, shippingCost, distance;

    cout << "Enter the weight of package (in kg): ";
    cin >> weight;

    if (weight <= 0)
    {
        cout << "Invalid weight. Please enter a valid wieght." << endl;
    }
    else



    {
        if (weight <= 2.0)
        {
            shippingCost = 1.10; // Rate per 500 miles shipped <= 2kg  
        }
        else if (weight > 2.0 && weight <= 6.0)//The > 2.0 may be redundant 
        {
            shippingCost = 2.20; // Rate per 500 miles shipped 2> and <= 6kg  
        }
        else if (weight > 6.0 && weight <= 10.0)
        {
            shippingCost = 3.70; // Rate per 500 miles shipped 6> and <= 10kg           
        }
        else if (weight > 10.0 && weight <= 20.0)
        {
            shippingCost = 4.80; // Rate per 500 miles shipped 10> and <= 20kg  
        }
        else
        {
            cout << "Package too heavy" << endl;; // Output for packages > 20kg  
            return 0;
        }
        cout << "The shipping cost for a package weighing " << weight << " kg is $" << shippingCost << " per 500  miles." << endl;
    }
    cout << "Enter distance in miles\n";
    cin >> distance;

    double total;

    if (distance < 10)
    {
        cout << "Take it yourself!\n";
    }
    else if (distance > 3000)
    {
        cout << "Sorry, We don't go that far.\n" << endl;
        return 0;
    }
    else
    {
        int distanceFactor = static_cast<int>((distance + 499) / 500); // Round up to next 500 miles. Truncates 
        total = shippingCost * distanceFactor;
        cout << "The Total cost for shipping is $" << total << " for a distance of " << distance << " miles\n" << endl;
    }
    return 0;
}
