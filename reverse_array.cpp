#include"bits/stdc++.h"
using namespace std;
int reverse(int array[], int start, int end){
    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        //cout<<array[i];
        start++;
        end--;
    }  
    
     
}
int printarray(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }

}
int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    reverse(array,0, n-1); 
    printarray(array,n);
    
      
}