// #include<iostream>
// using namespace std;
// void print (int n)
// {
//     if(n==0) return;
//     cout<<n<<endl;
//     print(n-1);
//     cout<<n<<endl;

// }
// int main()
// {
//     int n;
//     cout<<"Enter value of n : ";
//     cin>>n;
//     print(n);

// }

#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    print(n-1);
    cout<<"\n"<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    print(n);
}