#include"bits/stdc++.h"
#include<string.h>
using namespace std;
void reverse(string s){
    if(s.size()==0)
    return;
    string p= s.substr(1);
    cout<<p<<endl;
    reverse(p);
    cout<<s[0];
    //cout<<p[0];

}
int main(){
    string s= "vinod";
    reverse(s);
}