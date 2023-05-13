#include<iostream>
using namespace std;
class a{
    public:
    void fun(){
        cout<<"inheritance";
    }
  
};
class b: public a{
    void fun(){
    cout<<"single inheritance";
}
};
int main(){
    a op;
    op.fun();
    

}