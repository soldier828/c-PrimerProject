#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using std::string; using std::vector;

bool predicate(const string &s){
    return s.size() >= 5;
}

int main(){
    vector<string> seq = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa"};
    auto pivot = std::partition(seq.begin(), seq.end(), predicate);
    for (auto it = seq.cbegin(); it != pivot; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    return 0;
}
