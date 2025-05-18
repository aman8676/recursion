// #include<iostream>
// #include<string>
// using namespace std;
// void substring(string ori,string sub)
// {
//     if(ori=="")
//     {
//        cout<<sub<<endl;
//        return; 
//     }
//     substring(ori.substr(1),sub+ori[0]);
//     substring(ori.substr(1),sub);
// }
// int main()
// {
//     string s;
//     cout<<"Enter the string : ";
//     cin>>s;

//     substring(s,"");

// }


#include<iostream>
#include<string>
using namespace std;
void substring(string ori,string sub,int idx)
{
    if(idx==ori.size())
    {
       cout<<sub<<endl;
       return; 
    }
    substring(ori,sub+ori[idx],idx+1);
    substring(ori,sub,idx+1);
}
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    substring(s,"",0);

}