#include <vector>
#include <iostream>
#include <numeric>

int main(){
    std::vector<int> vi = {1,2,3,4,5};
    std::vector<double> vd = {1.3,4.3,5.3};  //sum=10.9
    std::cout << "Int result: " << std::accumulate(vi.cbegin(), vi.cend(), 0) << std::endl;
    std::cout << "Double(0) result: " << std::accumulate(vd.cbegin(), vd.cend(), 0) << std::endl;
    std::cout << "Double(0.0) result: " << std::accumulate(vd.cbegin(), vd.cend(), 0.0) << std::endl;
    return 0;
}
