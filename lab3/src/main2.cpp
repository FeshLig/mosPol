#include <iostream>

using namespace std;

int arr_sum(int *start, int *end);
int sum(int a, int b) {return a + b;}
int razn(int a, int b) {return a - b;}
int(*choice(char c))(int, int);

int main() {
	int arr[] {1, 2, 3, 4, 5};
    int *end = arr + 4;
	int summa = arr_sum(arr, end);
    cout << summa << endl << endl;
    cout << choice('+')(2, 3) << endl << sum(2, 3) << endl;
    float *a = new float;
    *a = 2.2;
    cout << *a << ' ' << a << endl;
    delete a;
}

int arr_sum(int *start, int *end) {
    int sum = 0;
    while (start != (end + 1)) {
        sum += *start;
        start++;
    }
    return sum;
}

int(*choice(char c))(int, int) {
    switch (c)
    {
    case '+':
        return sum;
        break;
    
    case '-':
        return razn;
        break;

    default:
        return nullptr;
        break;
    }
}
