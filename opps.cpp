#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;
    void printinfo(){
        cout<<"name: ";
        cout<<name<<endl;
        cout<<"age: ";
        cout<<age<<endl;
        cout<<"gender: ";
        cout<<gender<<endl;
    }
};
int main(){
    student arr[3];
    for (int i=0; i<3;i++){
        cout<<"enter "<<i+1<<"th student details: ";
        cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }
     for (int i=0; i<3;i++){
        arr[i].printinfo();
     }
}
