#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,i=0;
    int n;
    cin>>n;
    while(i<n)
    {
        int c=a+b;
        a=b;
        b=c;
        i++;
    }
    cout<<a;
}
