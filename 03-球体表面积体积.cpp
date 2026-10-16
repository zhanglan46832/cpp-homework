#include<iostream>
using namespace std;

const double PI = 3.1415926535;
const double m = 7.8;
int main() {
	int r;
	cout << "r:";
	cin >> r;
	r = r;
	double a = 4 * PI * r * r;
	double b = 4 / 3 * PI * r * r * r;
	double c = b * m;
	cout << "Radius r:" << r << "Ball surface area:" << a << "Ball volume:" << b << "Ball mass:" << c << endl;
	return 0;

}