#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int meter_now,meter_last,mile_driven;
    float gas_used, gas_per_mile;

    cout << "Vad står mätaren på just nu? I km! "; cin >> meter_now;
    cout << "Vad stod mätaren på för ett år sen? I km! "; cin >> meter_last;
    
    cout << setprecision(2) << fixed << 
    "Hur många liter bensin har förbrukats under året? "; cin >> gas_used;

    mile_driven = meter_now - meter_last;
    int i_mil = mile_driven/10;
    gas_per_mile = gas_used/i_mil;

    cout << "Antal körda km: " << mile_driven << "\n";
    cout << "Det är: " << i_mil << " mil \n";
    cout << "Antal liter bensin: " << gas_used << "\n";
    cout << "Förbrukning per mil: " << gas_per_mile << "\n";
    
    


    return 0;

}