
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void find_subsets(string s)
{
    sort(s.begin(),s.end());

    vector<string>v ={""};
    string temp="";

    for(int i=0;i<=0;i++)
    {
        for(int j=i;j<s.size();j++)
        {
            temp=temp+s[j];
            v.push_back(temp);
        }
    }

    for(int i=1;i<s.size();i++)
    {
        temp="";
        for(int j=i;j<s.size();j++)
        {
            if(s[j]!=s[j-1])
            {
                temp=temp+s[j];
                v.push_back(temp);
            }

            else
            {
                temp=temp+s[j];
            }
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
     
}
int main()
{
    string s;
    cout<<"enter the string : ";
    cin>>s;
    find_subsets(s);
}




// aaab
// aaa
// aab
// aa
// ab
// a
// b