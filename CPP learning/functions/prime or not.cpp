#include<iostream>
using namespace std;
bool isPrime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }    
    if(count==2){
        return true;
    }
    else{
    return false;
}
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<" "<<endl;
    cout<<"The prime numbers between "<<a<<" and "<<b<<" are :"<<endl;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
        cout<<i<<endl;
    }
    }
    return 0;
}