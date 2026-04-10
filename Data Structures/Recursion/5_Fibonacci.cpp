#include <iostream>

long fib(long n) {
    if ((n == 0) || (n == 1))
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    std::cout << fib(5);

    return 0;
}