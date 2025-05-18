#include<iostream>
using namespace std;
void greet(int n)
{
    if(n==0) return;
    cout<<"'GOOD MORNING'"<<endl;
    cout<<endl;
    greet(n-1);
}
int main()
{
    int n;
    printf("Enter how many times u want to print 'GOOD MORNING' : ");
    cin>>n;
    greet(n);

}