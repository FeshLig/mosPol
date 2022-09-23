#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    cout << "CHAPTER 1\n";
    int x = 1, y = 2, z = 3;
    
    int a = 3, b = 7;
    int ab1, ab2, ab3;
    int ab11, ab12, ab13;

    bool T = true, F = false, Rez;

    cout << x + y + z << endl << x - y - z << endl << x * y * z << endl << x / (y * z) << endl;
    cout << x % y << endl;
    cout << ((((145 - 100 / 20) / 20) * 50) + 45) << endl;

    ab1 = a & b;
    ab2 = a | b;
    ab3 = a ^ b;

    ab11 = ~ab1;
    ab12 = ab1 >> 1;
    ab13 = ab1 << 1;

    printf("a = %d\nb = %d\nab1 = %d\nab2 = %d\nab3 = %d\nab11 = %d\nab12 = %d\nab13 = %d\n", a, b, ab1, ab2, ab3, ab11, ab12, ab13);

    Rez = T && (T && (T && T || F) && (F || T != F));
    cout << Rez << endl;

    Rez = 25 < 48 && (23 > (3 + 15) || (2 < 8 && ( 5 >= 2 && 15 < 15)));
    cout << Rez << endl;
    
    cout << "CHAPTER 2\n";
    char operation;

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

    cout << "CHAPTER 3\n";
    int i = 1;
    y = 0;
    do {
        cout << "Input number: ";
        cin >> x;
    } while (x < 0);
    
    for (int i = 0; i <= x; i++) {
        y += i;
    }
    cout << y << endl;

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    while (array[i]) {
        i++;
    }

    for (int j = 0; j < 10; j++) {
        cout << array[j] << " ";
    }
    
    cout << endl;

    for (int j = 0; j < 10; j++) {
        if (j % 2 == 0) {
            cout << array[j] << " ";
        }
    }

    cout << endl;

    for (int j = 0; j < 10; j++) {
        if (j % 2 != 0) {
            cout << array[j] << " ";
            y += array[j];
        }
    }
    cout << "\nSum of % 2 !0 elements: " << y;
}
