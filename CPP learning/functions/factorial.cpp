#include<iostream>
using namespace std;
fact(int num){
    int fac=1;
    for(int i=1;i<=num;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    
    int n;
    cin>>n;
    int res;
    res=fact(n);
    cout<<"The factorial of "<<n<<" is "<<res<<endl;
    return 0;
}