#include "kcl2023_gorev2_220502006_elmas.h"
#include <iostream>
int main() {
    char karakter;
    int boyut;

    
    std::cout << "Enter the character you want: ";
    std::cin >> karakter;

    std::cout << "Enter size (must be between 3 and 15): ";
    std::cin >> boyut;

   
    
    Elmas_�iz elmasObj(karakter, boyut);

    
    elmasObj.�iz();

    return 0;
}