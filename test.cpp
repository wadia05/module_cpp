#include <iostream>

class Fixed {
private:
    int _value; // Assuming _value is an integer representing the fixed-point value

public:
    // Constructor
    Fixed(int value) : _value(value) {}

    // Pre-increment
    Fixed& operator++() {
        ++_value;
        return *this;
    }

    // Post-increment
    Fixed operator++(int) {
        Fixed temp = *this;
        ++_value;
        return temp;
    }

    // Pre-decrement
    Fixed& operator--() {
        --_value;
        return *this;
    }

    // Post-decrement
    Fixed operator--(int) {
        Fixed temp = *this;
        --_value;
        return temp;
    }

    // Function to get the value
    int getValue() const {
        return _value;
    }
};

int main() {
    Fixed a(5);
    Fixed b = ++a; // Pre-increment
    std::cout << "Pre-increment: " << b.getValue() << std::endl; // Output: 6

    Fixed c = a++; // Post-increment
    std::cout << "Post-increment: " << c.getValue() << std::endl; // Output: 6
    std::cout << "After Post-increment: " << a.getValue() << std::endl; // Output: 7

    return 0;
}