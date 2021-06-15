#include <iostream>
using namespace std;
int main(){
	double a, h, b, top, wall, q;
	int iq;
	float pi = 3.14;
	cout << "dim ";
	cin >> a;
	cout << "hight ";
	cin >> h;
	cout << "s ";
	cin >> b;
	top = (pi * sqrt(a)) / 4.0;
	wall = pi * a * h;
	q = (top + wall) / b;
	iq = q + 1;
	cout << "cup  " << iq;
	return 0;
}