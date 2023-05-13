#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // 1st way to print elemen of vector
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    // 2nd way to print element of vector
    for(auto element :v){
        cout<<element<<endl;
    }
    //3rd way to print elelment of vector
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<"**"<<endl;
    }
}




























