#include <iostream>

const double PI = 3.141592653589793;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate the perimeter (circumference) of a circle
double calculatePerimeter(double radius) {
    return 2 * PI * radius;
}

int main() {
    double radius;

    // Input the radius from the user
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate and display the area
    std::cout << "Area of the circle: " << calculateArea(radius) << std::endl;

    // Calculate and display the perimeter (circumference)
    std::cout << "Perimeter of the circle: " << calculatePerimeter(radius) << std::endl;

    return 0;
}
