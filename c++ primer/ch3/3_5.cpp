#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	string word;
	string sentence;
	while(cin >> word){
		sentence += word;
	}
	cout << sentence << endl;
	return 0;
}
