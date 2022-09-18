#include <iostream>  //  Подключение библиотеки iostream

using namespace std;   //  Подключение области значений std

int main() {  //  Объявление главной функции
    setlocale(LC_ALL, "ru");  //  Подключение в ASCII кириллицы
    cout << "PART 1" << endl;
    cout << "First string" << endl << endl;  //  Вывод строки по заданию п.1
    cout << "Первая строка\nВторая строка" << endl << endl;  //  Вывод строки по заданию п.2
    cout << "Спецсимволы \"\\\"" << endl << endl;  //  Вывод строки по заданию п.4

    cout << "PART 2" << endl;
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
}  //  Закрытие функции main
