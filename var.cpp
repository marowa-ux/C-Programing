#include <iostream>

using namespace std;

int isKeyword(char var[]) {
    char keywords[8][10] = {
        "int", "float", "double", "char", "static",
        "public", "private", "return"
    };

    for (int i = 0; i < 8; i++) {
        int j = 0;
        while (var[j] != '\0' && keywords[i][j] != '\0' && var[j] == keywords[i][j]) {
            j++;
        }
        if (var[j] == '\0' && keywords[i][j] == '\0') {
            return 1;
        }
    }
    return 0;
}

int isValidVariableName(char var[]) {
    if (var[0] == '\0') return 0;

    if (var[0] >= '0' && var[0] <= '9') return 0;

    if (isKeyword(var)) return 0;

    for (int i = 0; var[i] != '\0'; i++) {
        char ch = var[i];

        int isLetter = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
        int isDigit = (ch >= '0' && ch <= '9');
        int isUnderscore = (ch == '_');
        int isDollar = (ch == '$');

        if (!(isLetter || isDigit || isUnderscore || isDollar)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char variableName[100];
    cout << "Enter variable name: ";
    cin >> variableName;

    if (isValidVariableName(variableName)) {
        cout << "Valid variable name." << endl;
    } else {
        cout << "Invalid variable name." << endl;
    }

    return 0;
}
