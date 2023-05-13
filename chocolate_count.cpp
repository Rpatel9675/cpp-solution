//chocolate
#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,i, chock=0, wrapp;
cout<<"how much money u have";
cin>>n;
while((n-1)>=0)
{
    chock++;
}
wrapp= chock;

while( wrapp>=3){
chock = chock+ wrapp/3;
wrapp = wrapp/3+ wrapp%3;
}
cout<<chock;
}     