#include <iostream>
using namespace std;
int main(){
	float r, v, s;
	cout << "radius wara : ";
	cin >> r;
	v = 4 / 3 * 3.14 * (r*r*r);
	s = 4 * 3.14 * (r*r);
	cout << "obem wara: " << v << endl;
	cout << "plow,ad wara: " << s << endl;
}