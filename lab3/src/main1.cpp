#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int *p = &a;
	cout << p << endl << *p << endl;
	*p = 5;
	cout << a << endl;
	int arr[] {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl << endl;
	int b = 5;
	int *const pb = &b;
	(*pb) = 3;
	cout << b << endl;
	cin >> a;
}
