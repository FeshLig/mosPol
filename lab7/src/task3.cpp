#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>

#define PI 3.141592653589793

using namespace std;

void findSize(FILE *fp, int *size);

int main() {
    int radius, size, flag = 0, chr, counter;
    long double answer;
    char string[255];
    cout << "Input radius: ";
    cin >> radius;
    answer = 2 * PI * radius;
    printf("Answer: %.18Lf\n", answer);
    answer = round(answer * 1000 + 0.5) / 1000;
    cout << "New answer: " << answer << endl;


    while (true) {
        if (flag == 1) {
            FILE *fp = fopen("work.txt", "w");
            fclose(fp);
            flag = 0;
        }
        FILE *fp = fopen("work.txt", "r+t");
        cout << "Input string: ";
        gets(string);

        if (!strcmp(string, "read")) {
            while( fgets(string, 255 - 2, fp) != NULL)
                printf( "%s", string);
            cout << endl;
        } else if (!strcmp(string, "erase")) {
            flag = 1;
        } else if (!strcmp(string, "exit")) {
            fclose(fp);
            break;
        } else {
            fseek(fp, 0L, SEEK_END);
            chr = 0;
            fputs(string, fp);
            rewind(fp);
        }
        fclose(fp);
    }
}

void findSize(FILE *fp, int *size) {
    fseek(fp, 0L, SEEK_END);
    *size = ftell(fp);
    rewind(fp);
}

