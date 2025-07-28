#include <iostream>
using namespace std;

int main() {
    char input[100];
    int count = 0;

    cout << "Enter an Input: ";
    cin >> input;


    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
            input[i] == '/' || input[i] == '=' || input[i] == '%' ) {

            count++;
            cout << "operator" << count << " : " << input[i] << endl;
        }
    }

    cout << "number of operators = " << count << endl;

    return 0;
}
