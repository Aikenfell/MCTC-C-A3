#include <iostream>

using namespace std;

void divisors(int vicim) {
    int star = 1;
    int total = 0;
    int count = 0;
	cout << "Proper divisors: ";
    while (star < vicim-1) {
        star++;
        if (vicim % star == 0) {
			cout << " " << star;
            total += star;
            count++;
        }
    }
	cout << "\nNumber of proper divisors = " << count;
	cout << "\nSum of proper divisors = " << total;
}

int main() {
    int Pint;
    char cont = 'y';
    while (cont == 'y') {
        int Pint;
        cout << "Enter a number: ";
        cin >> Pint;
        divisors(Pint);
        cout << "\nContinue? (y or n): ";
        cin >> cont;

    }
}