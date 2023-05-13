#include<iostream>
using namespace std;
class function_overloding{
    public:
    void fun(){
        cout<<"function with no arguments"<<endl;
    }
    void fun(int x){
        cout<<"function with integer arguments"<<endl;
    }
    void fun(double x){
        cout<<"function with double arguments"<<endl;
    }
};
int main(){
    function_overloding a;
    a.fun();
    a.fun(4);
    a.fun(6.1);
}