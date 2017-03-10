#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string str;
	getline(cin, str);
	for (auto &c : str){
		if(ispunct(c))
			c = ' ';
	}
	cout << str << endl;
	return 0;
}
