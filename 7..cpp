#include <iostream>
using namespace std;
int main(){
	int w, a, b, c, d;
	cin >> w;
	a = w / 1000;
	b = (w / 100) % 10;
	c = (w / 10) % 10;
	d = w % 10;
	cout << a * b + c * d;
	return 0;
}