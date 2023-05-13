//biggest number from numeric string
#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a numeric string"<<endl;
    cin>>s;
    sort(s.begin(), s.end(), greater<int>());
    cout<<"greatest number is\t";
    cout<<s<<endl;
    return 0;
    
}
    