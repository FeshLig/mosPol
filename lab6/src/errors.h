#ifndef ERRORS_H_
#define ERRORS_H_

#include <iostream>

class Errors {
    public:
        Errors(int id);

        enum errorsCodes {
        LESSER,
        GREATER,
        ZERO_LESSER,
        DEFAULT
        };

};

#endif  //  ERRORS_H_
