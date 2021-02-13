#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=(n+1)/2){
        int space=1;
        while(space<=(n+1)/2-i){
            cout<<' ';
            space++;
        }
        int star=1;
        while(star<=2*i-1){
            cout<<'*';
            star++;
        }
        cout<<endl;
        i++;
    }
    int x=1;
    while(x<=(n-1)/2){
        int space1=1;
        while(space1<=x){
            cout<<' ';
            space1++;
        }
        int star1=1;
        while(star1<=n-(2*x)){
            cout<<'*';
            star1++;
        }
        cout<<endl;
        x++;
    }
}
