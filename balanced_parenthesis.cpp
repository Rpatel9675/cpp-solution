#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string s){
    int n= s.size();
    stack<char>st;
     bool ans = true;
    for(int i=0; i<n;i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() and st.top()== s[i])
            st.pop();
            else{
                ans = false;
                break;
        }
        }
            else if(s[i]=='}'){
            if(!st.empty() and st.top()== s[i])
            st.pop();
         else{
             ans= false;
             break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() and st.top()== s[i])
            st.pop();
            else{
            ans=false;
            break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
     else
    return ans;
}
int main(){
    string s="({[}])";
    if(isvalid(s)){
        cout<<"Is valid";
    }
    else
    cout<<"not valid";
}
