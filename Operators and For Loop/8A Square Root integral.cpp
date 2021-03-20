#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i=1;
    int square=1;
    while(i*i<=n){
        square=i*i;
        i++;
    }
    cout<<i-1;
}
