#ifndef SETTINGS_H_
#define SETTINGS_H_

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Settings
{
private:
public:
    static map<int, int> mp;
    static void add(int key, int value) {
        mp[key] = value;
    }

    static int get(int key) {
        return mp[key];
    }

    static void print() {
        map<int, int>::iterator it = mp.begin();
        for (auto i = mp.begin(); i != mp.end(); i++) {
            cout << i->first << '\t' << i->second << endl;
        }
    }
};


#endif  //  SETTINGS_H_
