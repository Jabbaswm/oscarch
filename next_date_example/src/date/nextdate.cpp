//
// Created by ojcch on 1/30/2020.
//


bool isLeapFn(int year) {

    //not divisible by four --> not leap
    if (year % 4 != 0)
        return false;

    //otherwise, it may be leap

    //not divisible by 100 --> leap year
    if (year % 100 != 0)
        return true;

    //otherwise... year is divisible by 100

    //divisible by 400 --> leap
    return year % 400 == 0;

}

int *nextDate(int day, int month, int const year) {

    int monthLength[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year < 1812 || year > 2050) {
        throw -1;
    }

    if (month < 1 || month > 12)
        throw -2;

    int monthDays = monthLength[month - 1];

    bool isLeap = isLeapFn(year);

    if (month == 2 && isLeap) {
        monthDays++;
    }

    if (day > monthDays) {
        throw -3;
    }

    static int next[] = {};
    if (month == 12 && day == 31) {
        next[0] = 1;
        next[1] = 1;
        next[2] = year + 1;
    } else if (day == monthDays) {
        next[0] = 1;
        next[1] = month + 1;
        next[2] = year;
    } else {
        next[0] = day + 1;
        next[1] = month;
        next[2] = year;
    }

    return next;
}