#include <iostream>
using namespace std;

/*

string sind "Hello"
int 1, 2, 3, -1, -3
float 1.2, 4.3, 1/2
double

*/


int main(){
    
    int x;
    cout << "Bitte schreiben Sie eine Zahl" << endl;
    cin >> x;

    if(x > 5){
        cout << "Die Zahl ist groesser als 5";
    }else{
        cout << "Die Zahl ist kleiner als 5";
    }

    return 0;
}