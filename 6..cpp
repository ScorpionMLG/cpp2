#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b;
	cout << "a=" << a <<endl<< "b=" << b;
	c = a;
	a = b;
	b = c;
	cout <<endl<<"a="<< a <<endl<< "b=" << b;
	return 0;
}