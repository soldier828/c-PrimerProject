#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	string str;
	getline(cin, str);
	for (auto &c : str)
		if (c != ' ')
			c = 'X';
	cout << str <<endl;
	return 0;
}
