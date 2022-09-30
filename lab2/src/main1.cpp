#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    char operation;
    int a, b;
    cin >> a >> b;
    cout << (a + b) / 2 << endl;
    cin >> operation;
    
    // if (operation == '+') {
    //     cout << a + b << endl;
    // } else if (operation == '-') {
    //     cout << a - b << endl;
    // } else if (operation == '*') {
    //     cout << a * b << endl;
    // } else if (operation == '/' && b != 0) {
    //     cout << a / b << endl;
    // } else {
    //     cout << "n/a\n";
    // }

    switch (operation)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        if (b != 0) {
            cout << a / b << endl;
            break;
        }
    default:
        cout << "n/a\n";
        break;
    }
    cin >> a;
}