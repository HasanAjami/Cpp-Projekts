#include <iostream>
#include <cstdlib>

int main(){

    int mw, lim;

    std::cout << "Bitte geben Sie die Anzahl der Mineralwasser Kisten ein: ";
    std::cin >> mw;
    std::cout << std::endl << "Bitte geben Sie die Anzahl der Limo Kisten ein: ";
    std::cin >> lim;

    int ges = mw + lim;
    int preisMw = mw * 4;
    int preisLim = lim * 6;
    int gesPreis = preisMw + preisLim;

    if(ges >= 10){
        gesPreis -= (gesPreis*0.12);
    }
    if(gesPreis < 75){
        gesPreis += 7;
    }

    std::cout << "Preis: " << gesPreis << " Euro";

    return 0;
}