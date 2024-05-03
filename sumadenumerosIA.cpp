#include <iostream>

long long sum_of_naturals(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n = 100;
    std::cout << sum_of_naturals(n) << std::endl;
    return 0;
}