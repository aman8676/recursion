#include<iostream>
using namespace std;
int pow(int a,int n)
{
    if(n==0) return 1;
    return a*pow(a,n-1);

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