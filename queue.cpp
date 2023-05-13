#include<iostream>
using namespace std;
#define n 100
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
    arr= new int[n];
    front =-1;
    back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
    
    if(front==-1){
        front++;
    }
    }
    void pop(){
        if(front==-1 ||front>back){
            cout<<"empty queue"<<endl;
            return;
        }
        front++;
    }
    int peak(){
        if(front==-1 ||front>back){
            cout<<"empty queue"<<endl;
            return -1;
    }
    return arr[front];

    }
    bool empty(){
        if(front==-1 ||front>back){
            cout<<"empty queue"<<endl;
            return true;
        
    }
    return false;
    }

};
int main(){
    queue q;
    q.push(9);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.peak();
    cout<<q.empty();
    q.pop();
    cout<<q.peak();

}
