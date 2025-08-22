#include <iostream>

int main() {
   
    auto  fib = [](int n) {

    
    auto _fib = [] (auto&& self,int m) {
        if (m == 0 || m == 1) return m;
        return self(self,m - 1) + self(self,m - 2);
    };

    return _fib(_fib, n);
};

std::cout << fib(6) << std::endl;
}
