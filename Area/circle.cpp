#include <iostream>

const double PI = 3.141592653589793;

//function for circle area
double calculate_Area(double radius) {
    return PI * radius * radius;
}

// Function for circle perimeter
double calculate_Perimeter(double radius) {
    return 2 * PI * radius;
}

int main() {
    double radius;

    // Input the radius 
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the area
    std::cout << "Area of the circle: " << calculate_Area(radius) << std::endl;

    // Calculate the perimeter
    std::cout << "Perimeter of the circle: " << calculate_Perimeter(radius) << std::endl;

    return 0;
}
