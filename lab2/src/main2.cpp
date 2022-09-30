#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    int i = 1, y = 0, x;
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

    y = 0;
    for (int j = 0; j < 10; j++) {
        if (j % 2 != 0) {
            cout << array[j] << " ";
            y += array[j];
        }
    }
    cout << "\nSum of % 2!=0 elements: " << y;
    cin >> x;
}