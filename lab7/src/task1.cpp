#include <iostream>
#include <string>

using namespace std;

int main() {
    string userStr;
    int flag = 0, length;
    cout << "Input string: ";
    getline(cin, userStr);
    if (userStr.size() > 3) {
        for (int i = 1; i < 4; i++) {
            cout << userStr[i];
        }
    } else {
        cout << "Length lesser 4";
    }
    for (int i = 0; i < userStr.size(); i++) {
        if (userStr[i] == 'a') {
            cout << endl << i << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << endl << "No symbol a" << endl;
    }

}


