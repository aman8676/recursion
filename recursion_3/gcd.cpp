#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
int gcd(int a ,int b)
{
    if(a==0)
    {
        return b;
    }
   
    gcd(b%a,a);
}
int main()
{
    int a=11,b=45;
    cout<<gcd(a,b);
    return 0;
}