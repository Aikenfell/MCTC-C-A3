#include <iostream>

using namespace std;

int main() {
    int max = 0;
    double tot = 0;
    cout << "Enter a positive integer: ";
    cin >> max;

    for (double min = 0; min < max;) {
        min++;
        tot += (1 / min);
    }
    cout << "Sum of the first " << max << " reciprocals = " << tot;
}