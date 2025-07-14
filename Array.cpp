#include <iostream>

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Array elements in normal order:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    std::cout << "Array elements in reverse order:" << std::endl;
    for (int i = 9; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
