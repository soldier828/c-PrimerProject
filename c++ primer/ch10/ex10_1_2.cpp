#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
#include <string>

using std::count;
using std::vector;
using std::list;
using std::string;
using std::cout;
using std::endl;

int main(){
    vector<int> seq = {1,2,3,2,1,2,3};
    //for (int i = 0; i !=10; ++i)
       // seq.push_back(i);
    int val = 2;
    auto n = count(seq.cbegin(), seq.cend(), val);
    cout << "vector has 2: " << n << endl;
    
    list<string> seq1 = {"a","a","aa","bdsf"};
    string letter = "a";
    auto n1 = count(seq1.cbegin(), seq1.cend(), letter);
    cout << "String has \"a\": " << n1 << endl;
    return 0;
}
