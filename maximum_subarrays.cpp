#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int curr=0, max1=0;
    for (int i = 0; i < n; i++)
    {
        curr=0;
        for (int j = i;j<n; j++)
        {
            curr+=arr[j];
            max1 =max(curr,max1);
            //cout<<curr<<endl;
        }
         //cout<<max1<<endl;
        //max1 =max(, curr);
        
    }
    cout<<max1;
    return 0;
    
}