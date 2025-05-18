#include<iostream>
#include<vector>
#include<string>
using namespace std;
void substring(string ori,string sub,vector<string>&v,bool flag)
{
    if(ori=="")
    {
        v.push_back(sub);
        return; 
    }
    char ch=ori[0];

    if(ori.length()==1)
    {
       if(flag==true) substring(ori.substr(1),sub+ori[0],v,true);
        substring(ori.substr(1),sub,v,true);
        return;

    }
    char dh=ori[1];
    if(ch==dh)
    {
    if(flag==true) substring(ori.substr(1),sub+ori[0],v,true);
    substring(ori.substr(1),sub,v,false);
    }
    else{
        if(flag==true) substring(ori.substr(1),sub+ori[0],v,true);
    substring(ori.substr(1),sub,v,true);
    }
}
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    vector<string>v;
    substring(s,"",v,true);

   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<endl;
   }

}