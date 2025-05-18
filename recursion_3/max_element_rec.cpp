#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int max(int arr[],int size,int high,int count)
{
    if(count==size) return high;
    if(arr[count]>high) high=arr[count];
    return max(arr,size,high,count+1);
}
int max2(int arr[],int size2,int idx)
{
    if(idx==size2)
    {
        return INT_MIN;
    }
    return max(arr[idx],max2(arr,size2,idx+1));
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<max(arr,size,INT_MIN,0);
    cout<<max2(arr,size,0);
}