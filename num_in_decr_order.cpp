/* print number till n
a. decrasing ORDER
b. incresing order
*/
#include"bits/stdc++.h"
using namespace std;
int dodr(int n){
    if(n==0)
    {
        return 1;
    }
    cout<< n;
    int x = dodr(n-1);
   // cout<< n;

}
int main(){
    int n,m;
    return dodr(9);
}