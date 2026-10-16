#include<iostream>
int main(){
	char c = 's';
	std::cout << "c: " << c++ << "\t";
	//std::cout << "c: " << ++c << "\t";
	std::cout << (int)c << '\t' << c + 1 << '\t' << static_cast<char> (c + 1) << '\n';
	return 0;
}
