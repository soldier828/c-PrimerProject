#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	vector<int> list;
	for (int i; cin >> i; list.push_back(i));
	auto lens = list.size();
	if (lens == 0) {
		cout << "INPUT" <<endl;
		return -1;
	}
	for (decltype(list.size()) i = 0; i < lens-1; i++)
		cout << list[i] + list[i+1] << " ";
	cout << endl;

	// 5/2=2  5/2.0=2.5
	for (decltype(list.size()) i = 0; i < int(lens/2.0 + 0.5); i++)
		cout << list[i] + list[lens - 1 - i] << " ";
	cout << endl;
	return 0;
}
