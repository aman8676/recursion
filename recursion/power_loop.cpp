#include<iostream>
using namespace std;
int pow(int a,int n)
{
    if(a==0&&n==0)
    {
        cout<<"not defined";
        return -1;
    }
    if (n==0)
    {
        return 1;
    }
    int val=1;
    for(int i=1;i<=n;i++)
    {
        val*=a;
    }
    return val;
}
int main()
{
    int a,n;
    cout<<"enter value of index : ";
    cin>>a;
    cout<<"enter value of power : ";
    cin>>n;
    cout<<a<<" to the power "<<n<<" is : "; 
    cout<<pow(a,n);
}