#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	vector<int> v;
	for (int i; cin >>i; v.push_back(i));
	if (v.size() < 2){
		cout << "At least 2 numbers " << endl;
		return -1;
	}
	cout << "adjecent sum: " << endl;
	for (auto beg = v.cbegin(); beg != v.cend()-1; ++beg)
		cout << *beg + *(beg + 1) << " ";
	cout << endl;
	cout <<  "begin & end sum: " << endl;
	// 也可以用首位迭代器更方便
	//for (auto beg = v.cbegin(); beg != v.cbegin() + v.size()/2; ++beg )
	//	cout << *beg + v[v.cend() - beg -1]  << " ";
	for (auto l = v.cbegin(), r = v.cend() -1; l <= r; ++l, --r)
		cout << *l + *r << " ";
	cout << endl;
	
	return 0;
}
