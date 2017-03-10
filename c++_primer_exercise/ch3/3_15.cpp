#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	vector<string> str;
	string word;
	while(cin >> word){
		str.push_back(word);
	}
	for (auto c : str)
		cout << c;
	cout << endl;
	return 0;
}
