#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permute(string ori,string ans,vector<string>&v)
{
    if(ori=="")
    {
        v.push_back(ans);
    }
    for(int i=0;i<ori.length();i++)
    {
        char ch=ori[i];
        string left=ori.substr(0,i);
        string right=ori.substr(i+1);
        permute(left+right,ans+ch,v);
    }
}
int main()
{
    string str;
    cout<<"enter the string : ";
    cin>>str;
    vector<string>v;
    permute(str,"",v);

    for(string ele:v)
    {
        cout<<ele<<endl;
    }
}