#include <iostream>
using namespace std;

int main() {
    char input[100];

    cout << "Enter input: ";
    cin >> input;

    int len = 0;
    while (input[len] != '\0') {
        len++;
    }

    if (( input[0] == '/' && input[1] == '/' && input[2] != '\0') ||
        ( input[0] == '/' && input[1] == '*' && input[len - 2] == '*' && input[len - 1] == '/'))
    {
        if (input[1] == '/'){
            cout << "This is a Single-line comment." << endl;
            }
        else {
            cout << "This is a Multi-line comment." << endl;
            }
    }
    else
        cout << "This is not a comment." << endl;

    return 0;
}

