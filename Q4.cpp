#include <iostream>
#include <cmath>

using namespace std;

float hypott(float a,float b)
{
		float hypoo;
		hypoo = sqrt((a*a)+(b*b));
		return hypoo;
}

int main() {
	float FL;
	float SL;
    cout << "Enter the side lengths: ";
    cin >> FL >> SL;
	float hyp = hypott(FL,SL);
    cout << "First side length = " << FL << "\n";
    cout << "Second side length = " << SL << "\n";
    cout << "Hypotenuse length = " << hyp ;

}