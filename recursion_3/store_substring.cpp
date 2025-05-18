
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void substring(string ori,string sub,int idx,vector<string>&v)
{
    if(idx==ori.size())
    {
        v.push_back(sub);
       return; 
    }
    substring(ori,sub+ori[idx],idx+1,v);
    substring(ori,sub,idx+1,v);
}
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    vector<string>v;
    substring(s,"",0,v);

   for(string ele:v)
   {
    cout<<ele<<endl;
   }

}