
int main() {
    constexpr auto factorial = [](int n) constexpr{
        auto constexpr _factorial = [] (auto&& self, int n) constexpr -> int{
            return (n == 1) ? 1 : n * self(self, n - 1); 
        };
        return _factorial(_factorial,n);
    };
    static_assert(factorial(5) == 120);
}

