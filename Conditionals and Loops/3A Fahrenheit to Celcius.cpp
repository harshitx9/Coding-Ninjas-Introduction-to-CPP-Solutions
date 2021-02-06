#include <iostream>
using namespace std;

int main(){
    int s,e,w;
    int f,c;
    cin>> s>>e>>w;
    f=s;
    while(f<=e){
        c= (f-32)*(5.0/9.0);
        cout<<f<<"\t"<<c<<endl;
        f=f+w;
    }
}
