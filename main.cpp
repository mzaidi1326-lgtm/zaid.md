#include <iostream>
using namespace std;
int main()
{
    int a,b,sum,multi;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    sum=a+b;
    multi=a*b;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Multiplication is: "<<multi<<endl;
    if(sum>100)
    {
     cout<<"Large sum"<<endl;
    }
    else
    {
    cout<<"Small sum"<<endl;
    }

    if(multi%2==0)
    {
    cout<<"Multiplication is even"<<endl;
    }
    else
    {
     cout<<"Multiplication is odd"<<endl;
    }
    return 0;
}