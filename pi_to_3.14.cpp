//replace pi with 3.14
#include<bits/stdc++.h>
using namespace std;
void replacei(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacei(s.substr(2));
    }
    else{
        cout<<s[0];
        replacei(s.substr(1));

    }
}
int main(){
    string s= "pippxxppiixipi";
    replacei(s);
}
