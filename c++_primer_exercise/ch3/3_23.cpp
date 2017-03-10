#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> v = {0,1,2,3,4,5,6,7,8,9};
	//vector<int> v;
	//for (int i=0;i<10;v.push_back(i++));
	for (auto b = v.begin(); b != v.end(); ++b)
		(*b) *=2;
	for (auto dig : v)
		cout << dig <<endl;
	cout << endl;
	return 0;
}
