#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using std::vector;  using std::string;

std::size_t biggerThan6(const vector<string> &words){
    return std::count_if(words.begin(), words.end(), [](const string &s) { return s.size() > 6;});
}
int main(){
    //ex10_20
    vector<string> v = {"alan","moophy","1234567","1234567","1234567","1234567"};
    std::cout << "ex10_20: " << biggerThan6(v) << std::endl;   

    //ex10_21
    int i = 5;
    auto check_and_decrement = [&i]() { return --i ? false : true; };
    std::cout << "ex10_21: ";
    while(!check_and_decrement())
        std::cout << i << " ";
    std::cout << "Final: " << i << std::endl;

    return 0;
}
