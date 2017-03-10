#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using std::placeholders::_1;
using namespace std;
bool isLesserthanOrEqualTo6(const string &s, size_t sz){
    return s.size() <= sz;
}

int main(){
    vector<string> authors{ "fuck", "Mooophy", "pezy", "Queequeg90", "shbling", "evan617" }; 
    auto res = count_if(authors.begin(), authors.end(), bind(isLesserthanOrEqualTo6, _1, 6));
    cout << "ex10.22: " << res << endl;
    return 0;
}
