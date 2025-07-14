#include <iostream>
using namespace std;
int main ()
{
    int a;
    cout<< "Enter num: ";
    cin>>a;

    if (a<0)
    {
        cout << "Enter the positive num: ";
    }

    int sum=0;
    for (int i=2; i<=a; i=i+2)
    {
        sum=sum+i;
        cout<<i<< " + ";
    }
    cout << " = " << sum;
}
