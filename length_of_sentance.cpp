//max length of any sentance
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char ar[n+1];
    cin.getline(ar, n);
    cin.ignore();
    int i=0, max=0, cl=0;
    int arr=0, st=0;
    while(1){
        
        if(ar[i]==' ' || ar[i]=='\0')
        {
            if(cl>=max)
            {
                max= cl;
                st= arr;
            }
            cl=0;
            arr = i+1;
        }
        else
        {
            cl++;
        }
        if(ar[i]=='\0')
        break;
        i++;
    
    }
    cout<<max<<st<<endl;
    int j;
    for ( j = 0; j <=max; j++)
    {
        cout<<ar[st+j];
    }
    
    }
