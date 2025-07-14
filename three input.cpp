#include<iostream>
using namespace std;
int main()
{
   int a, b, c;

   cout << "Enter first num: ";
   cin>> a;

   cout<< "Enter second num: ";
   cin>> b;

   cout<< "Enter third num: ";
   cin>> c;

   if ( a < b )
   {
       if(b<c){
     cout<< "Enter greatest value is c ";
   }
    else if ( b > c)
    {
        cout<< "Enter greatest value is b";
    }
}
    else if (a>b)
    {
        if (a>c){
         cout<< "Enter greatest value is a ";
    }
    else if (a<c){
        cout<< "Enter greatest value is c ";
    }
    }

}
