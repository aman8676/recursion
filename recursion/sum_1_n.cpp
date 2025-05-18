#include<iostream>
using namespace std;
int print(int sum,int n)
{
    if(n==0)
    {
        return sum;
    }
    sum+=n;
    return print(sum,n-1);
}
int main()
{
    int n;
    int sum=0;
    cout<<"Enter value of n : ";
    cin>>n;
    int x=print(sum,n);
    cout<<"summation is : "<<x;
    //cout<<"summation of 1 to n is :"<<sum;
}