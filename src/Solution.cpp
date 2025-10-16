#include "../include/Solution.h" 


std::string translator(int num) {
    
    const std::string units[] = {"sıfır", "bir", "iki", "üç", "dört",
        "beş", "altı", "yedi", "sekiz", "dokuz"
    };

    const std::string tens[] = {"", "on", "yirmi", "otuz", "kırk", "elli", 
        "altmış", "yetmiş", "seksen", "doksan"};

    
    if (num >= 0 && num <= 9) {
        return units[num];
    }

    if (num % 10 == 0) {
        return tens[num / 10];
    }

    int ten = num / 10;
    int unit = num % 10;
    return tens[ten] + " " + units[unit];
}