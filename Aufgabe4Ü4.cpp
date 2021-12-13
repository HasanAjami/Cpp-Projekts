/*
Programmablaufplan:
1. Ist a größer als b wird a durch die Differenz a-b ersetzt (d.h. a-b >0).
    if(a > b){
        a = a - b
    }

2. Im anderen Fall (else, a kleiner gleich b) wird b durch die Differenz b-a ersetzt (d.h. b-a ≥0).
    else if(a <= b){
        b = b - a
    }

3. falls b gleich null ist: weiter mit dem nächsten Schritt sonst weiter beim ersten Schritt .
    if( b == 0){
        Schritt 4
    }else{
        Schritt 1
    }

4. Die Zahl a wird als ggT ausgegeben.
    cout << a;
*/

#include <iostream>
using namespace std;

int ggT(int a, int b) {
   if (b == 0)
   return a;

   if(a > b){
       a -= b;
   }else if(a <= b){
       b -= a;
   }
   return ggT(a, b);
}

int main() {
    int a, b;
    cout << "Bitte a eingeben: ";
    cin >> a;
    cout << "Bitte b eingeben: ";
    cin >> b;

    cout << ggT(a, b);
}

