#include<bits/stdc++.h>
using namespace std;
int unique(int arr[], int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum ^= arr[i];

    }
    return sum;
}
int main(){
    int n; 
    int arr[]= {1,2,3,4,3,2,1};
    cin>>n;
    cout<<unique(arr, n);


}