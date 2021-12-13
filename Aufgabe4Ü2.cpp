#include <iostream>
#include <cstdlib>

int main(){

    float erste;
    float zweite;

    std::cout << "Bitte gib die erste Gleitkommazahl ein: " << std::endl;
    std::cin >> erste;
    std::cout << "Bitte gib die zweite Gleitkommazahl ein: " << std::endl;
    std:: cin >> zweite;

    if(erste > zweite){
        std::cout << erste;
    }else{
        std::cout << zweite;
    }

    return 0;
}