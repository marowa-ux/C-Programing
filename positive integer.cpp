#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cout << "Enter first num: ";
   cin>> a;

    if(a>b)
    {
        cout<< "Enter positive integer: ";
    }

    for(int i=1; i<=10; i++)
    {
        b=i*a;
        cout<< ""<<a<< "*" <<i <<"="<< b<< endl;
    }

}
