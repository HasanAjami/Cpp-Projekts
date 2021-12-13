#include <cmath>
#include <iostream>
#include <cstdlib>

int main(){
    int a, b, c;
    std::cout << "Bitte geben Sie a ein: ";
    std::cin >> a;
    std::cout << std::endl << "Bitte geben Sie b ein: ";
    std::cin >> b;
    std::cout << std::endl << "Bitte geben Sie c ein: " ;
    std::cin >> c;

    float s = (a+b+c)/2;
    float A = sqrt(s * (s-a) * (s-b) * (s-c));

    std::cout << "Die Flaeche des Segels ist: " << A; //Bei a = 10, b = 1, c = 1, wird "nan" (Not_a_Number) zurückgegeben, da ein negativer Wert in der Wurzel ist
    return 0;
}