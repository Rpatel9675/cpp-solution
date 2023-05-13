#include"bits/stdc++.h"
using namespace std;
int rotated(int arr[], int n, int m){
    if(n==0){
        return -1;
    }
    
    
    int e=n;
    int mid= (e+m)/2;
    if(n==m){
        return m;
    }
    
    if(arr[mid]<arr[mid-1]){
        return mid;
    }
    if(arr[mid]>arr[mid+1]){
        return mid+1;
    }
    if(arr[mid]>arr[mid-1]&&arr[mid]>arr[0]){
        return rotated(arr, n, mid);
        
    }
    return rotated(arr, mid, m);
    }
    

int main(){
    int arr[]={4,5,6,-9,-7,-5,-3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=0;
    cout<<rotated(arr,n,0);
}