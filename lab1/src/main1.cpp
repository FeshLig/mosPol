#include <iostream>  //  Подключение библиотеки iostream

using namespace std;   //  Подключение области значений std

int main() {  //  Объявление главной функции
    setlocale(LC_ALL, "ru");  //  Подключение в ASCII кириллицы
    cout << "First string" << endl << endl;  //  Вывод строки по заданию п.1
    cout << "Первая строка\nВторая строка" << endl << endl;  //  Вывод строки по заданию п.2
    cout << "Спецсимволы \"\\\"" << endl << endl;  //  Вывод строки по заданию п.4
    int a; cin >> a;
}  //  Закрытие функции main
