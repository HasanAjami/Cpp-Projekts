#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n;
    cout << "Bitte geben Sie eine Zahl ein: ";
    cin >> n;
    while(n >= 1){
        cout << "*";
        n--;
    }

    cout << "Bitte geben Sie eine Zahl ein: ";
    cin >> n;

    do{
        cout << "*";
        n--;
    }while(n >=1);


    return 0;
}