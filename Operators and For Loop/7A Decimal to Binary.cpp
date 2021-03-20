#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long i,j=0,sum=0;
    while(n!=0){
        i=n%2;
        long long product=1,k=0;
        while(k<j){
            product=product*10;
            k++;
        }
        sum=sum+i*product;
        n=n/2;
        j++;
    }
    cout<<sum;
}
