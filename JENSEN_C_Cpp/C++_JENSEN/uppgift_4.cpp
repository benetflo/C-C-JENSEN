#include <iostream>
#include <iomanip>

using namespace std;

int main(){


    float gallon,miles,miles_per_gallon,km_per_liter;

    cout << "How many miles? "; cin >> miles;
    cout << "How many gallons? "; cin >> gallon;

    miles_per_gallon = miles/gallon;

    km_per_liter = (miles*1.609)/(gallon*3.785);

    cout << setprecision(2) << fixed;
    cout << "Miles per gallon: " << setw(2) <<miles_per_gallon << "\n";
    cout << "Km per liter: " << setw(8) << km_per_liter << "\n";




    return 0;
}
