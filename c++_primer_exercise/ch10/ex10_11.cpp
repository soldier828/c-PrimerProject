#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::vector;
bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

void elimDups(vector<string> &words){
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}


/*
void print(vector<string> &result){
    for(const auto &s : result)
        std::cout << s << " ";
    std::cout << std::endl;
}
*/

template<typename T>
void print(T const& result){
    for(const auto& s : result)
        std::cout << s << " ";
    std::cout << std::endl;
}

int main(){
    vector<string> words = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    elimDups(words);
    std::stable_sort(words.begin(), words.end(), isShorter);
    print(words);
    return 0;
}
