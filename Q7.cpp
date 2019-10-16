#include <iostream>

#include <cmath>

using namespace std;

int getweight() {
    int PW;
    cout << "Enter package weight(oz): ";
    cin >> PW;
    return PW;
}

float deliveryCharge(int PW) {
    if (PW > 16) {
        PW = PW - 16;
        float bonus = ((PW) / 4) * 0.50;
        float final = 3 + bonus;
    return final;
    } else {
        float final = 3;
	    return final;
    }
}

void displayCharge(int w, float c) {
    cout << "Package weight = " << ((w - (w % 16)) / 16) << " lb. " << w % 16 << " oz.";
    cout << "\nDelivery charge = $" << c;
}

int main() {
    int val = getweight();
    float cost = deliveryCharge(val);
    displayCharge(val, cost);
}