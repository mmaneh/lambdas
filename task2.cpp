#include <vector>
#include <iostream>
template <typename T>
bool all_of (std::vector<int>& vec, bool(*f)(T a)) {
    for (auto& v : vec) {
        if(!f(v)) return false;
    }
    return true;
}

template <typename T>
bool any_of (std::vector<int>& vec, bool(*f)(T a)) {
    for (auto& v : vec) {
        if(f(v)) return true;
    }
    return false;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto lambda = [](int value) {
        return value < 5;
    };

    if (any_of<int>(vec, lambda)) std::cout << "true" << std::endl;
    else std::cout << "false" << std::endl;

    if (all_of<int>(vec, lambda)) std::cout << "true" << std::endl;
    else std::cout << "false" << std::endl;
}
