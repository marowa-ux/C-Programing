#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    const int sizeA = 5;
    const int sizeB = 7;

    int A[sizeA] = {2, 3, 4, 7, 8};
    int B[sizeB] = {3, 5, 7, 9, 11, 13, 15};

    unordered_set<int> commonElements;

    for (int i = 0; i < sizeA; i++)
        for (int j = 0; j < sizeB; j++)
            if (A[i] == B[j])
                commonElements.insert(A[i]);

    if (!commonElements.empty()) {
        cout << "Common element(s): ";
        for (int element : commonElements)
            cout << element << " ";
        cout << endl;
    } else {
        cout << "No common element!" << endl;
    }

    return 0;
}
