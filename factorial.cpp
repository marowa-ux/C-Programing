#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (isPrime(number)) {
        cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    } else {
        cerr << "Error: The entered number is not a prime number!" << endl;
    }

    return 0;
}






