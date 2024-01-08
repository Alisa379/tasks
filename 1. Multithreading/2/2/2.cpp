

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>



int main()
{                               
    std::vector<int> v1(1000);
    std::vector<int> v2(1000);
    std::vector<int> v3(10000);
    std::vector<int> v4(10000);
    std::vector<int> v5(100000);
    std::vector<int> v6(100000);
    std::vector<int> v7(1000000);
    std::vector<int> v8(1000000);
    std::transform(v1.begin(), v1.end(), v2.begin(), v1.begin(), std::plus<int>());
    /*
    std::mt19937 rnd(4321); 
    int cnt = 0;
    generate(v1.begin(), v1.end(), [&]() {cnt += 3; return cnt; });
    generate(v2.begin(), v2.end(), [&]() {cnt += 3; return cnt; });
    shuffle(v1.begin(), v1.end(), rnd);
    shuffle(v2.begin(), v2.end(), rnd);
    for (auto& it : v1) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    for (auto& it : v2) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    */
}

