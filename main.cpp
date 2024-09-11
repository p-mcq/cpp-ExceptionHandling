#include <iostream>
using namespace std;

int miles{0};
int gallons{0};
int milesPerGallon{0};

double CalculateMilesPerGallon(int _miles, int _gallons)
{
    if (_miles == 0 || _gallons == 0)
    {
        throw std::invalid_argument("0 value is not allowed");
    }
    return static_cast<double>(_miles) / _gallons;
}

int main()
{
    cout << "Enter miles driven: ";
    cin >> miles;
    cout << "\nEnter gallons used: ";
    cin >> gallons;
    try
    {
        milesPerGallon = CalculateMilesPerGallon(miles, gallons);
        cout << "\nMiles per gallon: " << milesPerGallon << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    cout << "End of Program" << endl;
    return 0;
}