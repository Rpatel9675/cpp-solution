// star printing
#include"bits/stdc++.h"
using namespace std;
int main(){
    int i, j, k, l;
    for(i=1; i<4; i++){
        for(j=1; j<30;j++){
            if((i+j)%4==0|| (i==2 && j%4==0))
                cout<<"*";
            else
                cout<<" ";
    }
    cout<<endl;
}
}