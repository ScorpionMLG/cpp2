#include <iostream>
using namespace std;
int main(){
	float x1, y1, x2, y2, c, d;
	cout << "A (x1;y1): ";
	cin >> x1 >> y1;
	cout<<"A (x2; y2) : ";
	cin >> x2 >> y2;
	c = (y1 - y2) / (x1 - x2);
	b = y2 - c * x2;
	cout << " y = " << c << "x + " << d;
	return 0;
}