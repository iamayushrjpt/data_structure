#include<iostream>
using namespace std;
#define n 5

class stack{
    int *arr;
    int top;

public:
    stack(){
        top=-1;
        arr=new int[n];
    }

    // insert an Element
    void push(int value){
        if(top>n-1){
            cout<<"stack is full\n";
            return;
        }
        top++;
        arr[top]=value;
    }

    //deletion of an Elements
    void pop(){
        if(top==-1){
            cout<<"stack is empty\n";
            return;
        }
        top--;
    }

    //IsEmpty or IsFull
    void stack_status(){
        if(top==-1){
            cout<<"stack is empty";
            return;
        }
        if(top<n-1){
            cout<<"stack is full";
            return;
        }
        else{
            cout<<"there are some elements";
        }
    }

    //view top Element
    void viewtop(){
        if(top==-1)
            cout<<"No Elements Found";
        else{
        cout<<"top element is :"<<arr[top]<<"\n";
        }
    }
    //view all Elements
    void show_all_elements(){
        for(int i=0;i<=top;i++){
            cout<<"elements no "<<i<<" is : "<<arr[i]<<"\n";
        }
    }
};

main(){
    stack s;

    s.push(9);
    s.push(5);
    s.push(3);
    s.push(24);
    s.push(1);

    s.viewtop();
    s.show_all_elements();
    s.pop();
    s.viewtop();
    s.show_all_elements();
    s.stack_status();
}
