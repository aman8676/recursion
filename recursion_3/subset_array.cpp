// #include<iostream>
// #include<vector>
// using namespace std;
// void subsets(int arr[],vector<int>v,int size,int idx)
// {
//     if(idx==size){
//          for(int i=0;i<v.size();i++)
//         {
//             cout<<v[i];
//         }
//         cout<<endl;
//         return;
//     }
//     subsets(arr,v,size,idx+1);
//     v.push_back(arr[idx]);
//     subsets(arr,v,size,idx+1);
// }
// int main()
// {
//     int arr[]={1,2,3};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     vector<int>v;
//     subsets(arr,v,size,0);       
// }


#include<iostream>
#include<vector>
using namespace std;

void subsets(int arr[],vector<int>v,int size,int idx)
{

    if(idx==size)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subsets(arr,v,size,idx+1);
    v.push_back(arr[idx]);
    subsets(arr,v,size,idx+1);
}

int main()
{
    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    subsets(arr,v,size,0);    
}