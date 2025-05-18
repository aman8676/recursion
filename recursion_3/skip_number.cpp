#include<iostream>
#include<vector>
using namespace std;
vector<int> remove(int arr[],vector<int>newarr,int idx,int n,int size)
{
    if(idx==size)
    {
        return newarr;
    }

    if(arr[idx]==n)
    {
       return remove(arr,newarr,idx+1,n,size);
    }
    else{
        newarr.push_back(arr[idx]);
         return remove(arr,newarr,idx+1,n,size);
    }
}
int main ()
{
    int n;
    int arr[]={1,2,3,4,5,6,1,3,1,5,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter number to be deleted from array: ";
    cin>>n;
    vector<int>newarr;
    newarr=remove(arr,newarr,0,n,size);
    cout<<"updated array:";

    for(int num:newarr)
    {
        cout<<num<<" ";
    }
}


