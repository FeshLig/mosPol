#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a = 150;
    float b = 15.933;
    unsigned char c = 250;
    cout << "a = " << a << endl << "b = " << b << endl << "c = " << (int)c << endl << endl;

    int day = 11;
    string month = "april";
    int year = 2003;
    cout << "Моя дата рождения: " << day << " " << month << " " << year << " года" << endl << endl;

    const float fcon = 2.3;
    const string scon = "WINDOWS";
    cout << fcon << ' ' << scon << endl;
    cin >> a;
}
