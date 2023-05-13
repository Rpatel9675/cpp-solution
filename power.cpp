#include<bits/stdc++.h>
using namespace std;
int pow2(int n){
    return (n&&!(n&(n-1)));
}
int main(){
    int n; 
    cin>>n;
    cout<<pow2(n);


}