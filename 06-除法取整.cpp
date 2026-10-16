#include<iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter dividend and divisor:";
    cin >> a >> b;
    cout << "  m:" << (double)a / b;
    cout << "  a:" << trunc(a / b);
    cout << "  b:" << ceil(a / b);
    cout << "  c:" << floor(a / b);
    cout << "  d:" << round(a / b) << endl;
    return 0;
}