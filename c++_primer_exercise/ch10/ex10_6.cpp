#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    std::vector<int> seq = {1,2,3,4,5,6,7};
    for (auto i : seq)
        std::cout << i << " ";
    std::cout << std::endl;
    std::fill_n(seq.begin(), seq.size(), 9);
    for (auto i : seq)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}

