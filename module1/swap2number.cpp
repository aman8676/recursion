                                  //using 3rd variable
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y;
//     cout<<"enter 1st number : ";
//     cin>>x;
//     cout<<"enter 2nd number : ";
//     cin>>y;
//     int z=x;
//     x=y;
//     y=z;
//     cout<<" 1st number now : "<<x<<endl;
//     cout<<" 2nd number now : "<<y;
//     return 0;
// }


                       // without using 3rd variable


#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter 1st no. : ";
    cin>>x;
    cout<<"enter 2nd no. : ";
    cin>>y;
    int sum=x+y;
    y=sum-y;
    x=sum-x;
    cout<<" 1st number now : "<<x<<endl;
    cout<<" 2nd number now : "<<y;

}