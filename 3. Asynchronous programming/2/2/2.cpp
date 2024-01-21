

#include <iostream>
#include <vector>
#include <future>

template<typename It>
void increment(It begin, It end) {
    for (begin; begin < end; begin++) {
        *begin += 1;
    }
}

template<typename It, size_t size = 25>
void for_each_(It begin, It end, void(&f)(It begin_, It end_)) {
    size_t  curr_size = std::distance(begin, end);
    if (curr_size <= size) {
        f(begin, end);
    }
    auto mid = begin;
    std::advance(mid, curr_size / 2);
    auto ft_res = std::async(for_each_<It>, begin, mid, ref(f));
    ft_res.get();
    f(mid, end);
}


int main()
{
    std::vector<int> V(100, 2);
    for_each_(V.begin(), V.end(), increment);
    //increment(V.begin(), V.end());
    for (auto it : V) {
        std::cout << it << std::endl;
    }
}

