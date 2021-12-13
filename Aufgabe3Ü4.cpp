#include <cmath>
#include <iostream>
#include <cstdlib>

int main(){
    double a, b, c;

    while(true){
    std::cout << "Bitte geben Sie a ein: ";
    std::cin >> a;
    std::cout << std::endl << "Bitte geben Sie b ein: ";
    std::cin >> b;
    std::cout << std::endl << "Bitte geben Sie c ein: " ;
    std::cin >> c;

    if (a < 0){
        std::cout << "a darf nicht negativ sein!";
    }else if (b < 0)
    {
        std::cout << "b darf nicht negativ sein!";
    }else if (c < 0){
        std::cout << "c darf nicht negativ seine!";
    }else{
        std::cout << "Alles gut :)" << std::endl;
        if(a > b+c || b > a+c || c > a+b){
        std::cout << "Bitte die Bedingung fuer Dreiecksungleichung beachten!" << std::endl;
        continue;
        }else{
        break;
        }
    }
    }

    float s = (a+b+c)/2;
    float A = sqrt(s * (s-a) * (s-b) * (s-c));

    std::cout << "Die Flaeche des Segels ist: " << A; 
    return 0;
}