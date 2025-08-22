#include <vector>
#include <iostream>

template <typename T, typename F>
T* find_if(std::vector<T>& values, F  f) {
    for (auto& v : values) {
        if (f(v)) return &v;
    }
    return nullptr;
}

int main() {
    std::vector<int> vec = {1,2,3,4,5};
    auto lambda = [](int value) {
        return value == 3;
    };
    int* p = find_if<int>(vec, lambda);

    if (p) std::cout << *p << std::endl;
    else std::cout << "nullptr" << std::endl;
}
