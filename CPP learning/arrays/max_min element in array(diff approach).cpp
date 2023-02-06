#include<iostream>
using namespace std;

int main(){
    int n;
    int minele, maxele;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    minele=arr[0],maxele=arr[0];
    for(int i=0;i<n;i++){
        maxele=max(maxele,arr[i]);
        minele=min(minele,arr[i]);
    }
    cout<<endl;
    cout<<"Maximum element is "<<maxele<<" Minimum element is "<<minele<<endl;
}