#include <iostream>

#define ROW 2
#define COL 3

using namespace std;
int foo(int a = 1);
void foo2(int b, int c, int &d, int &e);

int main() {
	int count = 0, summa = 0, small_arr[COL], b = 0, c = 0, rand = 20;
	float rofl = 20.84;
	float& p_rofl1 = rofl;
	float& p_rofl2 = rofl;

	int** arr = (int**)malloc(ROW * sizeof(int*));
	if (arr == NULL) {
		return -1;
	}

	for (int i = 0; i < ROW; i++) {
		*(arr + i) = (int*)malloc(COL * sizeof(int));
	}

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			arr[i][j] = count++;
			summa += arr[i][j];
		}
	}

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	cout << endl << summa << endl;

	for (int i = 0; i < COL; i++) {
		summa = 0;
		for (int j = 0; j < ROW; j++) {
			summa += arr[j][i];
		}
		small_arr[i] = summa;
	}

	for (int i = 0; i < COL; i++) {
		cout << small_arr[i] << ' ';
	}

	cout << endl;

	for (int i = 0; i < ROW; i++) {
		free(arr[i]);
	}
	free(arr);
	
	cout << rofl << endl;
	p_rofl1 = 5.5;
	cout << rofl << ' ' << p_rofl1 << endl;

	cout << foo() << endl;

	cout << b << ' ' << c << endl;

	foo2(2, 3, b, c);

	cout << b << ' ' << c << endl;

	cout << rand << endl;

	for (int i = 0; i < 3; i++) {
		cout << rand << endl;
		cout << i << endl;
	}
}

int foo(int a) {
	int sum = 0;
	if (a <= 0) {
		return 0;
	} else {
		for (int i = 0; i < a + 1; i++)
			sum += i;
		return sum;
	}
}

void foo2(int b, int c, int &d, int &e) {
	d = b + c;
	e = b * c;
}
