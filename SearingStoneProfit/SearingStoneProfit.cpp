#include <iostream>
#include <iomanip>
#include <cmath>
#include "headers/httplib.h"
#include "headers/json.hpp"


const int requiredMagmaCream = 50;
const int requiredNetherrack = 30;

int main() {
    int magmaChunks;

    std::cout << "Enter the number of Magma chunks you have: ";
    std::cin >> magmaChunks;

    int craftable = magmaChunks / 50; // 
    int magmaCream = requiredMagmaCream * craftable;
    int netherrack = requiredNetherrack * craftable;


    // Round down the quantities to the nearest fifties and thirties if not divisible
    if (magmaCream % 50 != 0) {
        magmaCream = (magmaCream / 50) * 50;
    }
    if (netherrack % 30 != 0) {
        netherrack = (netherrack / 30) * 30;
    }

    std::cout << "\nYou can craft " << craftable << " searing stones, and you need to buy : \n";
    std::cout << "Enchanted Magma Cream: " << magmaCream << "\n";
    std::cout << "Enchanted Netherrack: " << netherrack << "\n";

    return 0;
}