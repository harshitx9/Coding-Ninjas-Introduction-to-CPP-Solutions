#include<iostream>
using namespace std;

int main(){
    char c;
    int countchar=0;
    int countdigits=0;
    int countwspace=0;
    c= cin.get();
    while(c!='$'){
        if(c>=48 || c<=57){
            countdigits++;
        } else if(c==' ' || c=='\n' || c=='\t'){
            countwspace++;
        } else {
            countchar++;
        }
        c=cin.get();
    }
    cout<<countchar<<' '<<countdigits<<' '<<countwspace<<endl;
}
