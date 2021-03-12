#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=0;
    int num=0;
    while(n!=0){
        int x=n%10;
        num=num+x*pow(2,i);
        i++;
        n=n/10;
    }
    cout<<num;
}
