#include <iostream>
#include "foo.h"

using namespace std;

void hello(int a) {
    static int b = 0;
    cout << a + b << endl;
}
