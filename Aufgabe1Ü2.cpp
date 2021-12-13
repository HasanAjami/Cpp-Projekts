#define USE_MATHS_DEFINES
#include <cmath>
#define PI 3.1415926535897931

#include <iostream>
#include <cstdlib>

int main(){
    double winkel;
    std::cout << "Bitte geben Sie den Winkelgrad ein:" << std::endl;
    std::cin >> winkel;
    float bgm;
    bgm = (winkel * PI) / 180;
    std::cout << "Der Bogenmass ist: " << bgm << std::endl;
    std::cout << "Sinus von " << winkel << " grad ist: " << sin(bgm);

    return 0;
}

