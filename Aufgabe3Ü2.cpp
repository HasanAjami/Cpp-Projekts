
#include <cmath>
#define PI 3.1415926535897931
#include <iostream>
#include <cstdlib>

float flaeche(float durchmesser){ 
    std::cout << durchmesser << std::endl;
    float Aplane = PI * pow(durchmesser, 2)/4;
    return Aplane;
}

float umfang(float durchmesser){
    float umf = 2 * PI * (durchmesser/2);
    return umf;
}

int main(){
    std::cout << "Bitte geben Sie die Durchmesser des Beckens ein: " << std::endl;
    float dm;
    std::cin >> dm;
    dm += 60;
    dm /= 100;

    std::cout << "Die Flaeche der Plane sollte " << flaeche(dm) << " Quadratmeter sein." << std::endl;
    std::cout << "Die Flaeche des quadratischen Materials, aus dem die Plane geschnitten wird, sollte " << pow(dm, 2) << " Quadratmeter sein" << std::endl;
    std::cout << "Die Laenge der Schnur sollte: " << umfang(dm) + 1.5 << "m sein.";


    return 0;
}