//
// Created by ojcch on 1/30/2020.
//

# include <iostream>
# include "dir/nextdate.cpp"

int main() {
    int day = 29;
    int month = 2;
    int year = 2020;
    try {
        int *next = nextDate(day, month, year);
        cout << next[1] << "/" << next[0] << "/" << next[2];
    } catch (int err) {
        if (err == -1)
            cout << "Year in incorrect";
        else if (err == -2)
            cout << "Month in incorrect";
        else if (err == -3)
            cout << "Day in incorrect";
        else
            cout << "Unexpected error";
    }
    return 0;
}
