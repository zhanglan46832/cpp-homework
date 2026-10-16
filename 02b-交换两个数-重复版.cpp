   //从键盘键入两个数，实现两个数交换，并输出结果 
   #include <iostream>
   using namespace std;

   int main() {
	
		int a, b, t;
	
		
		cout << "输入a,b:";
	cin >> a >> b;
	t = a;
	a = b;
	b = t;
	//交换 
	cout << "a: " << a << "    b: " << b << endl;
	
		
}
return 0;