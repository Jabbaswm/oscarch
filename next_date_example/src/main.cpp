//
// Created by ojcch on 1/30/2020.
//

# include <iostream>
# include "date/nextdate.h" //we include .h files, not .cpp files (made the mistake of including the .cpp in class)

using namespace std;

int main() {
    int day = 29;
    int month = 2;
    int year = 2020;

    try {
        int *next = nextDate(day, month, year);
        cout <<" The next day is: " << next[1] << "/" << next[0] << "/" << next[2] << endl;
    } catch (int err) {
        if (err == -1)
            cout << "Year is incorrect"<< endl;
        else if (err == -2)
            cout << "Month is incorrect"<< endl;
        else if (err == -3)
            cout << "Day is incorrect"<< endl;
        else
            cout << "Unexpected error"<< endl;
    }
    return 0;
}
