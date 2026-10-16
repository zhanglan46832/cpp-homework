//从键盘输入两个数，输出最小的数
#include<iostream>
using namespace std;

int main() {
	int x, y;
	cout << "Input x,y:";
	cin >>x >> y;
	if (x > y)
		cout << "The second integer is smaller,with a value of" << y << endl;
	else
		cout << "The second integer is smaller,with a value of" << x << endl;
	return 0;


}