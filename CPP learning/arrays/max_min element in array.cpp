#include<iostream>
using namespace std;

int main(){
    int n;
    int ma;
    int mi;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    mi=arr[0];
    ma=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>ma){
            ma=arr[i];
        }
    } 
    for(int i=0;i<n;i++){
        if(arr[i]<mi){
            mi=arr[i];
        }
    }   
    cout<<endl;
    cout<<"maximum is "<<ma<<" minimum is "<<mi;
    return 0;
}