#include<iostream>
using namespace std;
void traverse(int arr[],int size,int count)
{
    if(count==size) return;
    cout<<arr[count]<<" ";
    traverse(arr,size,count+1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    traverse(arr,size,0);
}