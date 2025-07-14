#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    char op;
    cout << "Enter first num: ";
   cin>> a;

   cout<< "Enter second num: ";
   cin>> b;

   cout<< "Enter num: ";
   cin>> op;

   switch (op){
   case '+' :
       cout << "Result: " << a+b <<endl;
       break;

       case '-' :
       cout << "Result: " << a-b <<endl;
       break;

       case '*' :
       cout << "Result: " << a*b <<endl;
       break;

        case '/' :
            if(b!=0){
       cout << "Result: " << a/b <<endl;
            }
       else {
        cout << "Error: " <<endl;
       }
       break;
        default:
            cout << "Invalid operator: "<< endl;
   }

}
