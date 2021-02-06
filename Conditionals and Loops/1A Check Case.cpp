#include<iostream>
using namespace std;

int main() {
    char c;
    int n;
    cin>>c;
    n=c;
    if(n>=97 && n<=122 ){
        cout << 0;  
    } else if(n>=65 && n<=90){
        cout << 1;
    } else{
        cout<<-1;
    }
}
