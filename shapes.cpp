#include <iostream>
using namespace std;
int main()
{
    int i,j , count;
    cout<<"Enter the size of the square: ";
    cin>>count;
    for( i = 0; i <count;i++)
    {
        for( j = 0; j< count;j++)
        {
            if(i==0||i==count-1||j==0||j==count-1)
            {
            cout<<"*";
            }
            else
            {
             cout<<" ";
            }
        }
        cout<<endl;
    }
    // triangle
    cout<<"Enter the size of the triangle: ";
    cin>>count;
    for( i =0; i <count;i++)
    {
     for( j = 0; j <=i;j++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
    
    return 0 ;
}