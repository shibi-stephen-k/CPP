#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a is largest with the value of "<<a<<endl;
        }
        else{
            cout<<"c is largest with the value of "<<c<<endl;
        }
    }
    else{
        if(b>c){    
            cout<<"b is largest with the value of "<<b<<endl;
        }
        else{
            cout<<"c is largest with the value of "<<c<<endl;
        }
    }
    return 0;
}