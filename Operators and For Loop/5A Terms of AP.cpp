#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    int count=0;
    cin>>n;
    while(count<n){
        int x=3*i+2;
        if(x%4==0){
            i++;
        }else{
            cout<<x<<' ';
            i++;
            count++;
        }
    }
}
