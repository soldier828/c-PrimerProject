#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	vector<string> vec;
	//for (string word; cin >> word; vec.push_back(word));
	string word;
	while (cin >> word)
		vec.push_back(word);
	
	for (auto &word : vec)
		for (auto &c : word)
			c = toupper(c);
	for (auto word : vec)
		cout << word << endl;
	return 0;
}
