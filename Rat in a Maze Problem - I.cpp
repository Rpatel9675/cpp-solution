//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// User function template for C++

class Solution{
    private:
    bool safe(int x, int y, int n,vector<vector<int>> v,vector<vector<int>>&m){
          if((x>=0 &&x<n)&&(y>=0&&y<n)&&v[x][y]==0 &&m[x][y]==1){
              return true;
          }
          else return false;
    }
    void solve(vector<vector<int>>&m, int n ,vector<string>&s,int x, int y,
                     vector<vector<int>> v, string path){
        if(x==n-1&&y==n-1) {
            s.push_back(path);
            return;
        }
        v[x][y]=1;
        int nx=x+1;
        int ny=y;
        if(safe(nx,ny,n,v,m)){
            path.push_back('D');
            solve(m,n,s,nx,ny,v,path);
            path.pop_back(); 
        }
        nx=x;
        ny=y-1;
        if(safe(nx,ny,n,v,m)){
            path.push_back('L');
            solve(m,n,s,nx,ny,v,path);
            path.pop_back(); 
        }
        nx=x;
        ny=y+1;
        if(safe(nx,ny,n,v,m)){
            path.push_back('R');
            solve(m,n,s,nx,ny,v,path);
            path.pop_back(); 
        }
        nx=x-1;
        ny=y;
        if(safe(nx,ny,n,v,m)){
            path.push_back('U');
            solve(m,n,s,nx,ny,v,path);
            path.pop_back(); 
        }
        v[x][y]=0;
        
    }
    public:
    vector<string> findPath(vector<vector<int>>&m, int n ) {
        vector<string>s;
        if(m[0][0]==0) return s;
        int x=0;
        int y=0;
       
        vector<vector<int>> v=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            v[i][j]=0;
        }
        string path="";
        solve(m,n,s,x,y,v,path);
        sort(s.begin(), s.end());
        return s;
        
        // Your code goes here
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Endss