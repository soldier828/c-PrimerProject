#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string str;
	getline(cin, str);
	for (decltype(str.size()) i = 0; i < str.size(); i++){
		if (str[i] != ' ')
			str[i] = 'X';
	}
	cout << str << endl;
	return 0;
}
