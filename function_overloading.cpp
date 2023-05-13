#include"bits/stdc++.h"
using namespace std;
class fun_overloading{
    public:
    void fun(){
        cout<<"i am function with no arguments"<<endl;
    }
    int fun(int a){
        cout<<"i am example of int arguments"<<endl;
    }
    void fun(double a){
        cout<<"i am example of double arguments"<<endl;
    }

};
int32_t main(){
    fun_overloading obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
}