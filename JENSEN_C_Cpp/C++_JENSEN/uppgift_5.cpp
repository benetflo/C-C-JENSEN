#include <iostream>

using namespace std;

int main(){

    int h1, m1, s1, h2, m2, s2, tot_h, tot_m, tot_s;


    cout << "Skriv tiden för första loppet (ttmmss)"; cin >> h1 >> m1 >> s1;
    cout << "Skriv tiden för andra loppet (ttmmss)"; cin >> h2 >> m2 >> s2;

    tot_h = h1 + h2;
    tot_m = m1 + m2;
    tot_s = s1 + s2;

    cout << tot_h << tot_m << tot_s;




    


    return 0;
}