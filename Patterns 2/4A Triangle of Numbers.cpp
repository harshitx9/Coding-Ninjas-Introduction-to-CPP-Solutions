#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space>0){
            cout<<' ';
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<i+j-1;
            j++;
        }
        int k=1;
        while(k<i){
            cout<<(2*i)-k-1;
            k++;
        }
        cout<<endl;
        i++;
    }

}
