#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string s1 = "I love you";
	string s2 = "I LOVE YOU";
	if (s1 == s2)
		cout << "s1 = s2" << endl;
	else
		cout << "s1! = s2" << endl;
	char str1[] = "I love you";
	char str2[] = "I LOVE YOU";
	if (strcmp(str1, str2) == 1)
		cout << "str1 = str2" << cout;
	else
		cout << "str1 != str2" << endl;
	return 0;
}
