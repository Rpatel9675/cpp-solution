#include"bits/stdc++.h"
using namespace std;
int countones(int n){
     int count=0;
    while (n)
    {
        count ++;
        n=n &(n-1);
    }
    return count;
    
}
int main(){
    int n=6;
    cout<<countones(n);
}