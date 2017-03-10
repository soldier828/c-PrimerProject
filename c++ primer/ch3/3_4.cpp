#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	string s1,s2;
	while (cin >> s1 >> s2){
		if (s1 == s2)
			cout << "Same" << endl;
		else
			cout << "Bigger one: " << ((s1>s2) ? s1 : s2) << endl;
	}
	return 0;
}
