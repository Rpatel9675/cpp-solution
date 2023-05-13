#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main() {
    //int t;
    //cin>>t;
    //while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int arr[m], ar[k];
        for(int i=0;i<m;i++) cin>>arr[i];
        for(int i=0;i<k;i++) cin>>ar[i];
        int array[m+k];
        for(int i=0;i<m+k;i++) {
            array[i]=arr[i];
            arr[m+i]=ar[i];
        }
        sort(array, array+m+k);
        for(int i=0;i<m+k;i++){
            cout<<array[i];
        }
        cout<<endl;
    //}
	// your code goes here
	return 0;
}
