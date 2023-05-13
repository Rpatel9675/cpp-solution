// matrix multplication
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,m;
    int ar[3][4]= {{2,4,1,2},{8,4,3,6},{1,7,9,5} };
    int arr[4][3]={{1,2,3}, {4,5,6}, {7,8,9},{4,5,6}};
    int are[3][3];
    
       for (int i = 0; i< 3; i++)
       for(int j=0; j<3; j++){
        are[i][j]=0;
       }
       for(int i=0; i<3; i++){
       for (int j = 0; j< 3; j++){
       for (int k = 0; k< 4; k++)
       { 
        are[i][j] += ar[i][k] *arr[k][j];
         
       }
       }
    
       }
       
       for(int i=0; i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            cout<<are[i][j];
            cout<<"\t";
        }
        cout<<endl;
       }
}
        
