#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int numTerms;

    std::cout << "Enter the number of Fibonacci terms to generate: ";
    std::cin >> numTerms;

    std::cout << "Fibonacci sequence:\n";
    for (int i = 0; i < numTerms; ++i) {
        std::cout << fibonacci(i) << " , ";
    }

    return 0;
}
