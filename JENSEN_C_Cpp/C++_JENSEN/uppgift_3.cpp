#include <iostream>
#include <string>

using namespace std;

int main(){


    int bil_age, aktuellt_age, bil_arsmodel;

    cout << "Aktuellt år: "; cin >> aktuellt_age;
    cout << "Bilens årsmodell: "; cin >> bil_arsmodel;

    bil_age = aktuellt_age - bil_arsmodel;

    if (bil_age < 5){
        cout << "Din bil är yngre än 5 år. Välj en helförsäkring! \n";

    }else if(bil_age >=25){

        cout << "Din bil är en veteranbil! Välj en veteranbilsförsäkring! \n";

    }else{

        cout << "Din bil är äldre än 5 år. Välj en halvförsäkring! \n";
    }

    
    
    
    


    return 0;


}