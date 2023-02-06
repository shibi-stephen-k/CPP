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
    
    int n,r;
    cin>>n>>r;
    int res;
    res=fact(n)/(fact(r)*fact(n-r));
    cout<<"The factorial of "<<n<<" is "<<res<<endl;
    return 0;
}