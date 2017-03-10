#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string str;
	getline(cin, str);
	decltype(str.size()) str_cnt = 0;
	while(str_cnt < str.size()){
		if (str[str_cnt] != ' ')
			str[str_cnt] = 'X';
		str_cnt++;
	}
	cout << str << endl;
	return 0;
}
