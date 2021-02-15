#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<=n){
        int j=2;
        int flag=0;
        while(j<i){
            if(i%j==0){
                flag=1;
                break;
            }
            j++;
        }
        if(flag==0){
            cout<<i<<' ';
        }
        i++;
    }
}
