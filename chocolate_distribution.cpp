#include"bits/stdc++.h"
using namespace std;
int distribution(int arr[], int n, int m){
    if(n<m){
        return -1;
    }
    if(m==0){
        return 0;
    }
    int dif, min=INT_MAX;
    sort(arr, arr+n);
    for(int i=0; i+m-1<n;i++){
        dif= arr[m+i-1]-arr[i];
        if(min>dif){
            min=dif;
        }
    }
    return min;
}
int main(){
    int m;
    cout<<"enter number of student : ";
    cin>>m;
    int arr[]={ 12, 4,  7,  9,  2,  23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    //{5,3,8,1,5,2,7,2,8,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<distribution(arr, n,m);
}