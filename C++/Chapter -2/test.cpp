#include <iostream>

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5;
    int b = 10;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}

