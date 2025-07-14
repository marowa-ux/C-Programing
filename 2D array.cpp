#include <iostream>
using namespace std;
int main ()
{
    float arr[2][4];
    cout<< "Enter Array: "<< endl;

    for(int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            cout<< "Elements[" << i << "][" << j << "]: ";
            cin>>arr[i][j];
        }
    }

    float maxFirstRow =arr[0][0];
    for(int j=1; j<4; j++){
        if(arr[0][j] > maxFirstRow)
            maxFirstRow = arr[0][j];
    }

    float minSecondRow = arr[1][0];
    for(int j=1; j<4; j++){
        if(arr[1][j] < minSecondRow)
            minSecondRow = arr[1][j];
    }

    float result = maxFirstRow * minSecondRow;

    cout<< "Largest element of first row: "<< maxFirstRow <<endl;
    cout<< "Smallest element of second row: "<< minSecondRow <<endl;
    cout<< "Multiplied result: "<< result <<endl;
}
