// find 1st and last occurence in an array {4,2,1,2,5,2,7}
#include"bits/stdc++.h"
using namespace std;
int  occurence(int arr[], int n, int i, int key)
{   if(i==n)
return -1;
    if(arr[i]==key)
    return i;
    return  occurence (arr, n, i+1, key);
}
int  lastocur(int arr[], int n, int i, int key)
{   
    if(i==n)
    return -1;
    int last = lastocur(arr, n, i+1, key);
    if(last !=-1)
    return last;
    if(arr[i]==key)
    return i;
    return -1;
    

}

int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<< occurence(arr, 7, 0, 2)<<endl;
    cout<< lastocur(arr, 7, 0, 2);
}