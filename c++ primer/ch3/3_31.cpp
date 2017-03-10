#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	int v[10];
	for (int i=0; i!=10; i++)
		v[i] = i;
	for (auto s : v)
		cout << s << " ";
	cout << endl;
	return 0;
}
