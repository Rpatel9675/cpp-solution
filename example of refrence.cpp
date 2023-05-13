//example of refrence
 #include<iostream>
using namespace std;
int main()
{
char *p = "ram";
char *q = p;
cout << p << endl << q << endl;
q = "ytre";
cout << p << endl << q << endl;
return 0;
}
