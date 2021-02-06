#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int evensum=0;
    int oddsum=0;
    while(n!=0){
        int i=n%10;
        if(i%2==0){
            evensum=evensum+i;
        }else{oddsum=oddsum+i;}
        n=n/10;
    }
    cout<<evensum<<' '<<oddsum<<endl;
}
