#include<iostream>
#include<string>
using namespace std;
string remove_char(string str,string r,char ch)
{
    if(str=="")
    {
        return r;
    }
    if(str[0]==ch)
    {
        return remove_char(str.substr(1),r,ch);
    }

    else{
        return remove_char(str.substr(1),r+str[0],ch);
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
    cout<<remove_char(str,"",ch);
    return 0;
}