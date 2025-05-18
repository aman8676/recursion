#include<iostream>
#include<string>
using namespace std;
string remove_char(string str,string r,char ch,int idx)
{
    if(idx==str.length())
    {
        return r;
    }
    if(str[idx]==ch)
    {
        return remove_char(str,r,ch,idx+1);
    }

    else{
        return remove_char(str,r+str[idx],ch,idx+1);
    }
}
int main()
{
    string str;
    cout<<"enter a string : ";
    cin>>str;
    char ch;
    cout<<"enter the word to be omitted from a string : ";
    cin>>ch;
    cout<<"string is : ";
    cout<<remove_char(str,"",ch,0);
    return 0;
}