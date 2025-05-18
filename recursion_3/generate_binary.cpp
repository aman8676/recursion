#include<iostream>
#include<cmath>
using namespace std;
void generate_binary(string s,int n)
{
    if(n==0) 
    {
        cout<<s<<endl;
        return;
    }
    if(s==""||s[s.length()-1]=='0')
    {
        generate_binary(s+'0',n-1);
        generate_binary(s+'1',n-1);
    }
    else
    {
        generate_binary(s+'0',n-1);
    }
    
}
int main()
{
    int n;
    cout<<"enter the length of string : ";
    cin>>n;

    generate_binary("",n);


}
