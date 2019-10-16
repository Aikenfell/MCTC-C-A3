#include <iostream>

#include <cmath>

using namespace std;

void leapYear(int year) {
    if (year % 400 == 0) {
        cout << year << " is a leap year";
    } else if (((year % 4) == 0) && ((year % 100) != 0)) {
        cout << year << " is a leap year";
    } else {
        cout << year << " is not a leap year";
    }

}

int main() {
    int Y;
    cout << "Enter year: ";
    cin >> Y;
    leapYear(Y);
}