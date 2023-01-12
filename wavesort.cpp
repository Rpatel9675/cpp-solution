#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]= arr[b];
    arr[b]= temp;
    

}
void wavesort(int arr[], int n){
    for(int i=1; i<n;i+=2){
        if(arr[i]>arr[i-1])
        swap(arr, i, (i-1));
        if(arr[i]>arr[i+1] && i<(n-2)){
            swap(arr, i, i+1);
        }
    }
    
}
int main(){
    
   int arr[]= {1,3,4,7,5,6,2};
   
   wavesort(arr, 7);
   for(int i=0; i<7;i++){
    cout<<arr[i];
   }
}
