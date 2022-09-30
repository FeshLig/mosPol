#include <iostream>
#include "foo.h"

#define SUM(a, b) a + b

using namespace std;

int main() {
    int x;
    hello(1);
    hello(2);
    hello(3);
    cout << SUM(1, 2) << endl;
    cin >> x;
}
