#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0;i<=5; i++) {                     //; i < sizeof(arr) / sizeof(arr[0]);
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;

    return 0;
}



#include <iostream>
using namespace std;

int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial: " << factorial(num) << endl;
    return 0;
}



