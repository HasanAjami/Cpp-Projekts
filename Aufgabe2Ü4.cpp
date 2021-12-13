#include <iostream>
#include <cstdlib>

int main(){

    int zeilen;
    int n = 1;
    std::cout << "Bitte geben Sie die Anzahl der Zeilen ein: ";
    std::cin >> zeilen;

    while(zeilen >= n){
        std::cout << n << "    " << n*n << std::endl;
        n++;
    }

    return 0;
}