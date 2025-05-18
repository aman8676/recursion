#include<iostream>
#include<vector>
using namespace std;

void combinational(vector<int>v,int arr[],int n,int target,int idx)
{
     if(target<0) return;
        if(target==0)
        {
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i];
            }
            cout<<endl;
            return;
        }

    for(int i=idx;i<n;i++)
    {
        v.push_back(arr[i]); 
        combinational(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
}
int main()
{
    int arr[]={2,3,5};

    vector<int>v;
    int target=8;

    combinational(v,arr,3,target,0);
}