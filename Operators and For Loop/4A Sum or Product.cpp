#include <iostream>
using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    if(c==1){
        int i=1;
        int sum=0;
        while(i<=n){
            sum=sum+i;
            i++;
        }
        cout<<sum<<endl;
    }else if(c==2){
        int j=1;
        int pro=1;
        while(j<=n){
            pro=pro*j;
            j++;
        }
        cout<<pro<<endl;
    }else{cout<<-1;}
}
