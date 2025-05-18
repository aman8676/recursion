#include<iostream>
#include<string>
#include<vector>
using namespace std;

void get_subsequence(string ori,string ans,vector<string>&v,int length)
{

    if (ori.length() + ans.length() < length) {
        return;  
    }

    if(ori==""){
        v.push_back(ans);
        return;
    }
    get_subsequence(ori.substr(1),ans+ori[0],v,length);
    get_subsequence(ori.substr(1),ans,v,length);
    
}
int main()
{
    string ori;
    cout<<"enter the number : ";
    cin>>ori;
    vector<string> v;
    get_subsequence(ori,"",v,3);

     for(string ele:v)
   {
    if(ele.length()==3)
    cout<<ele<<endl;
   }
}