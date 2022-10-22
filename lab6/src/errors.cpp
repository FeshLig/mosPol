#include "errors.h"

Errors::Errors(int id) {
    if (id == LESSER)
        std::cout << "Hmm... I don't believe\n";
    else if (id == GREATER)
        std::cout << "You weren't born yet\n";
    else if (id == ZERO_LESSER)
        std::cout << "You inputed negative number\n";
    else if (id == DEFAULT)
        std::cout << "Thanks!\n";
}
