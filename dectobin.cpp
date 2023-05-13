//function
#include<bits/stdc++.h>
using namespace std;
int dectobin(int n){
    int count=0;
    int number =1;
    while (n>0)
    {   
        int a = n%2;
        count= count+a;
        n= n/2;
        count *= 10;
    }
    return count/10;
    
}
int32_t main(){
    int n;
    cin>>n;
    cout<<dectobin(n);
}