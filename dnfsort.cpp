// dnf sort
#include<iostream>
using namespace std;
void swap(int arr[], int a, int b){
    int temp; 
    temp = arr[a];
    arr[a]=arr[b];
    arr[b]= temp;

}
void dnfsort(int arr[], int n){
    int i=0;
    int mid=0;
    int r=n-1;
    while(mid<=r){
        if(arr[mid]==0){
            swap(arr, i, mid);
            i++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,r);
            r--;
        }
    }
}
int main(){
    cout<<"inter size of array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    cin>>arr[i];

//int arr[]= {1,1,0,0,1,2,2,0};
dnfsort(arr,n);
for(int i=0; i<8;i++){
    cout<<arr[i];
}
}