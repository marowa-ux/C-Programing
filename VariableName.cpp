#include<iostream>
using namespace std;

int main()
{
    char a[20];

    cout << "Enter a variable name: ";
    cin >> a;
    cout << "Enter: " << a << endl;

    int count =0;

    for(int i=0;i<20;i++)
    {
        if(a[0]== '0'||a[0]=='1'||a[0]=='2'||a[0]=='3'||a[0]=='4'||a[0]=='5'||a[0]=='6'||a[0]=='7'||a[0]=='8'||a[0]=='9')
        {
            count=1;
        }
        else if(a[0]=='i'&& a[1]=='n' && a[2]=='t')
        {
            count=1;
        }
        else if(a[0]=='f' && a[1]=='l' && a[2]=='o' && a[3]=='a'&& a[4]=='t')
        {
            count=1;
        }
        else if(a[0]=='s' && a[1]=='t' && a[2]=='a' && a[3]=='t'&& a[4]=='i'&& a[5]=='c')
        {
            count=1;
        }
        else if(a[0]=='p' && a[1]=='u' && a[2]=='b' && a[3]=='l'&& a[4]=='i'&& a[5]=='c')
        {
            count=1;
        }
        else if(a[0]=='s' && a[1]=='t' && a[2]=='r' && a[3]=='n'&& a[4]=='g')
        {
            count=1;
        }
        else if(a[i]=='@')
        {
            count=1;
            break;
        }
        else if(a[i]=='#')
        {
            count=1;
            break;
        }
        else{count=0;}
    }

    if(count==1)
    {
        cout<<"Nmae is Invalied";
    }
    else
    {
      cout<<"Name is Correct";
    }
}
