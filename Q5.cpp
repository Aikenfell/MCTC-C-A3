#include <iostream>
#include <cmath>

using namespace std;

float quad(float a,float b,float c,float x)
{
		float Quack;
		float AX2 = a*(x*x);
		float BX = b*x;
		float C = c;
		Quack = AX2 + BX + C;
		return Quack;
}

int main() {
	float AV;
	float BV;
	float CV;
	float XV;
    cout << "Enter a, b, and c: ";
    cin >> AV >> BV >> CV;
    cout << "\nEnter x: ";
    cin >> XV;
    cout << "Quadratic function value = " << quad(AV,BV,CV,XV) << "\n";
}