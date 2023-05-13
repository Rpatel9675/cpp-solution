//refrence
#include<iostream>
using namespace std;
int main()
{
int i = 5;
int &j = i;
int p = 10;
j = p;
cout << i << endl << j << endl;
p = 20;
cout << i << endl << j << endl;
return 0;
}
