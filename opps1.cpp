#include<iostream>
using namespace std;
class student{
    private:
    string id;
   public:
   string name;
   int age;
   bool gender;
   void setname(string s){
    id =s;
   }
};
int main(){
    string s;
    student iem;

        iem.name="rocky";
        iem.age =19;
        iem.gender=0;
        //iem.id='gstwh';
        
    student arr[3];
    for(int i=0;i<3;i++){
        /*cin>>arr[i].age;
        cin>>arr[i].name;
        cin>>arr[i].gender;*/
        cin>>s;
        arr[i].setname(s);

    }
    for(int i=0;i<3;i++){
        cout<<s;

    }
       

    
    
    
}
