#include <iostream>

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
double calculateRectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

int main() {
    double length, width;

    // Input the length and width from the user
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate the area
    std::cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << std::endl;

    // Calculate the perimeter
    std::cout << "Perimeter of the rectangle: " << calculateRectanglePerimeter(length, width) << std::endl;

    return 0;
}
