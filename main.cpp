#include <iostream>

int miles{0};
int gallons{0};
int milesToGallons{0};

using namespace std;
int main()
{
    cout << "Enter how many miles you have driven: ";
    cin >> miles;
    cout << "\nEnter how many gallons of gas you have used: ";
    cin >> gallons;

    try
    {
        if (miles <= 0 || gallons <= 0)
        {
            throw std::runtime_error("Negative or 0 values are not allowed.");
        }
        milesToGallons = static_cast<double>(miles) / gallons;
        cout << "\nYour car gets " << milesToGallons << " miles per gallon.\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    // milesToGallons = miles / gallons;
    // cout << "\nYour car gets " << milesToGallons << " miles per gallon.\n";

    cout << "Thank you for using the program.\n";
    return 0;
}