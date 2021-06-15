#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << "perimetr pr9mougolnika";
	cout <<endl<< "vvedite dlinu";
	cin >> a;
	cout << "wirinu";
	cin >> b;
	cout << "perimetr pr9mougolnuka " << 2 * (a + b);
	cout << endl<<"perimetr treugolnika";
	int c;
	cout <<endl<< "vvedite storoni ";
	cin >> a >> b >> c;
	cout << "perimetr treugolnika " << a + b + c;
	cout << endl<<"random 4etirexugolnik";
	int d;
	cout << " vvedite 4 storoni: ";
	cin >> a<<b<<c<<d;
	cout << "random 4etirexugolnik " <<a + b + c + d;
	return 0;
}