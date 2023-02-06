#include<iostream>
using namespace std;
fib(int num){
    int t1=0,t2=1,nexterm;
    for(int i=0;i<=num;i++){
        cout<<t1<<endl;
        nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
    }
}

int main(){
   int n;
   cin>>n;
   fib(n);

    return 0;
}