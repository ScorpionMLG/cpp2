#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	while (a%b!=0)
		b++;
	cout << b;
	return 0;
}