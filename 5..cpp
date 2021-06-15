#include <iostream>
using namespace std;
int main(){
    int sum, y;
    float pr, m, s;
    cout << "summa ";
    cin >> n;
    cout << "years ";
    cin >> y;
    cout << "procent ";
    cin >> pr;
    pr = pr / 100;
    m = (sum * pr * pow((1 + pr), y)) / (12 * (pow(1 + pr, y) - 1));
    s = m * 12 * y;
    cout << m <<endl<< sum;
    return 0;
}