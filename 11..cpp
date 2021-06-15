#include <iostream>
using namespace std;
int main(){
    float r, h, pi = 3.14, s, v;
    cout << "visota cilindra: "; 
    cin >> h;
    cout << "radius cilindra: "; 
    cin >> r;
    s = 2 * pi * r * (r + h);
    v = pi * (r * r) * h;
    cout << "plow,ad powerxnosti : " << s << endl;
    cout << "obem cilindra: " << v << endl;
}