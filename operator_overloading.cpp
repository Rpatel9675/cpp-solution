#include<iostream>
using namespace std;
class complex{
    private :
    int imag, real;
    public:
    complex(int r=0, int i=0){
        real =r; 
        imag = i;
        }
        complex operator + (complex const &obj){
            complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void display(){
            cout<<real <<"+ i"<<imag<<endl;
        }
    };
    int main(){
        complex c1 (12,5);
        complex c2(4,3);
        complex c3= c1+c2;
        c3.display();
        return 0;
    }





    
