#include <iostream>

using namespace std;

int main() {
    int cou = 1;
    double tot = 0;
    int max = 0;
    int min = 0;
    int val = 0;
    cout << "Enter score " << cou << ": ";
    cin >> max;
	min = max;
	val = min;
	tot = val;
    double avg = 0;
 
    while (val >= 0) {
        cou++;
        cout << "Enter score " << cou << ": ";
		
        cin >> val;
        if (val < 0) {
            break;}
        if (val < min) {
            min = val;
        }
        if (val > max) {
            max = val;
        }
        tot += val;
    }
    cout << "You entered " << cou-1 << " scores." << "\n";
    cout << "Maximum score = " << max << "\n";
    cout << "Minimum score = " << min << "\n";
    cout << "Average score = " << tot / (cou-1);

}