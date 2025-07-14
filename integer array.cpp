#include <iostream>
using namespace std;

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Array elements:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}
