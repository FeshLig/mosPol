#include "errors.h"

int main() {
    int number, year;
    std::cout << "Input numbers 1,2 or 3: ";
    try {
        std::cin >> number;
        if (number != 1 && number != 2 && number != 3)
            throw "Incorrect value\n";
    }
    catch(const char* e)
    {
        std::cout << e;
    }

    std::cout << "Input birthday year: ";
    try {
        std::cin >> year;
        if (year < 1850 && year >= 0)
            throw Errors(Errors::LESSER);
        else if (year > 2022)
            throw Errors(Errors::GREATER);
        else if (year < 0)
            throw Errors(Errors::ZERO_LESSER);
        else
            throw Errors(Errors::DEFAULT);

    } catch(...) {}
    std::cin >> year;
}


