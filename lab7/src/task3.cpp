#include <iostream>
#include <math.h>
#include <fstream>

#define PI 3.141592653589793

using namespace std;

int main() {
    int radius;
    long double answer;
    cout << "Input radius: ";
    cin >> radius;
    answer = 2 * PI * radius;
    printf("Answer: %.18Lf\n", answer);
    answer = round(answer * 1000 + 0.5) / 1000;
    cout << "New answer: " << answer;

    while(true) {
        cout << "Input string: ";
    }
}

