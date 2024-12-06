#include <iostream>
using namespace std;

class CRectangle {
    int width, height; // Private members for dimensions

public:
    // Constructor to initialize width and height
    Crectangle(int, int);

    // Member function to calculate the area
    int area() {
        return width * height;
    }
};

// Define the constructor outside the class
CRectangle::Crectangle(int a, int b) {
    width = a;
    height = b;
}

int main() {
    // Create two CRectangle objects with different dimensions
    CRectangle rect(3, 4);    // Rectangle with width=3, height=4
    CRectangle rectb(5, 6);   // Rectangle with width=5, height=6

    // Call the area() function and display results
    cout << "rect area: " << rect.area() << endl;    // Output: 12
    cout << "rectb area: " << rectb.area() << endl;  // Output: 30

    return 0; // Exit the program
}
