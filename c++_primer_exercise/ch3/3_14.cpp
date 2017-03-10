

#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){
	cout << "Input a list of integers" << endl;
	vector<int> list;
	int digit = 0;
	while(cin >> digit){
		list.push_back(digit);
	}
	for (auto d : list)
		cout << d;
	cout << endl;
	return 0;
}
