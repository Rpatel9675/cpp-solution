//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int mn=arr[0];
        int mx= arr[n-1];
        int ans= arr[n-1]-arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-k<0)
                continue;
            
                mn=min(arr[i]-k, arr[0]+k);
                mx=max(arr[i-1]+k, arr[n-1]-k);
                ans=min(ans, mx-mn);
            
            //mx=max(arr[i]+k, arr[n-1]-k);
        }
        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends