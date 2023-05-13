//pointer function
#include<bits/stdc++.h>
using namespace std;
void increment(int *x){
   
  *x= *x+1;
  //cout<<x;
   
}
int main(){
    int a=10;
    
    increment(&a);
    
  
   cout<<a;
    
}