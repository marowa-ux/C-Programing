#include <iostream>
using namespace std;

void printOddNumbers(int start, int end) {
    cout << "Odd numbers between " << start << " and " << end << ": ";

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {

    int start, end;

    cout << "Enter the starting value of the range: ";
    cin >> start;

    cout << "Enter the ending value of the range: ";
    cin >> end;

    printOddNumbers(start, end);

    return 0;
}
