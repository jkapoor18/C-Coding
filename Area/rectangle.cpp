#include <iostream>

double calculate_Rectangle_of_Area(double length, double width) {
    return length * width;
}

double calculate_Rectangle_0f_Perimeter(double length, double width) {
    return 2 * (length + width);
}

int main() {
    double length, width;

    // Input the length & width from users
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate the area
    std::cout << "Area of the rectangle: " << calculate_Rectangle_of_Area(length, width) << std::endl;

    // Calculate the perimeter
    std::cout << "Perimeter of the rectangle: " << calculate_Rectangle_0f_Perimeter(length, width) << std::endl;

    return 0;
}
