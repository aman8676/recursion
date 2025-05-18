//https://www.programiz.com/online-compiler/2hIpe8PueqRWq

#include<iostream>
using namespace std;
int sum=0;
int fibonacci(int n,int a,int b)
{
    if(n==0) return sum;
    sum=a+b;
    return fibonacci(n-1,b,sum);
}
int main()
{
    int n;
    cout<<"enter term no. for which u have to find it's fibonacci: ";
    cin>>n;
    cout<<fibonacci(n-2,1,1);
}