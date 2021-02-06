#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space>=0){
            cout<<' ';
            space--;
        }
        int val=i;
        int j=1;
        while(j<=i){
            cout<<val;
            val++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
