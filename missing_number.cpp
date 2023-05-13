#include"bits/stdc++.h"
using namespace std;
int megasort(int arr[], int n){

}
int missing(int arr[],int n, int k){
    megasort(arr, n);
    return arr[n-k-1];

}
int main(){
    int n, k;
    cin>>n;
    cout<<"enter k: ";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    missing(arr, n,k);
}