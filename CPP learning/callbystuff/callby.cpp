#include<iostream>
using namespace std;

//pass by value / call by value
void passbyvalue(int x,int y){
    int temp;
    cout<<"Before Swap in called function a="<<x<<" b="<<y<<endl;
    temp = x;
    x=y;
    y=temp;
    cout<<"After Swap in called function a="<<x<<" b="<<y<<endl;
}

//pass by reference / call by reference
void passbyreference(int &x, int &y){
    cout<<"Before Swap in called function a="<<x<<" b="<<y<<endl;
    int temp = x;
    x=y;
    y=temp;
    cout<<"After Swap in called function a="<<x<<" b="<<y<<endl;
}

//pass by address /  call by address 
void passbyaddress(int *x, int *y){
    cout<<"Before Swap in called function a="<<x<<" b="<<y<<endl;
    int temp = *x;
    *x=*y;
    *y=temp;
    cout<<"Before Swap in called function a="<<x<<" b="<<y<<endl;
}
int main(){
    int a=5,b=10;
    cout<<"Before Swap in main function a="<<a<<" b="<<b<<endl;
    //passbyvalue(a,b);
    //passbyreference(a,b);
    passbyaddress(&a,&b);
    cout<<"After Swap in main function a="<<a<<" b="<<b<<endl;
    return 0;
}