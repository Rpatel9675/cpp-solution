//remove duplicates key
#include<bits/stdc++.h>
using namespace std;
void removed(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]==s[1]){
        string p=s.substr(1);
        removed(p);

    }
    else{
     cout<<s[0];
        removed(s.substr(1));
    }

}
int main(){
    
    removed("aaaabbedddd");
}
