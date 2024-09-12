#include <iostream>

using namespace std;

int miles{0};
int gallons{0};
int milesPerGallon{0};

double CalculateMilesPerGallon(int _miles, int _gallons)
{
    if (_gallons == 0 || _miles == 0)
    {
        throw invalid_argument("Divide by zero error");
    }

    if (_gallons < 0 || _miles < 0)
    {
        throw invalid_argument("Negative value error");
    }

    return static_cast<double>(_miles) / _gallons;
}

int main()
{
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "\nEnter the gallons: ";
    cin >> gallons;
    try
    {
        milesPerGallon = CalculateMilesPerGallon(miles, gallons);
        cout << "\nResult: " << milesPerGallon << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    cout << "Bye" << endl;
    return 0;
}