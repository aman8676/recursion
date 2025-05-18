#include<iostream>
using namespace std;
int main()
{
    float x,z;
    cout<<"enter value of x : ";
    cin>>x;
    int y=(int)x;
    if(x<0)
    {
        y=y-1;
    }
    cout<<y<<endl;
    z=x-y;
    cout<<"value of fractional part is : ";
    cout<<z;
}