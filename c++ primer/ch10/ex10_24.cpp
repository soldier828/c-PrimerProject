#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;
using std::placeholders::_1;

bool check_size(const string& s, size_t sz){
    return s.size() < sz;
}

int main(){
     vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7 };
     string str("12345");
     auto res = find_if(vec.begin(), vec.end(), bind(check_size, str, _1));
     if (res != vec.cend())
         cout << *res << endl;
     else
         cout << "Not Found! " << endl;
     return 0;
}
