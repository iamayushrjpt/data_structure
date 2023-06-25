#include<iostream>
using namespace std;
#define n 5

class queue{
    int *arr;
    int front,back;

public:
    queue(){
        front=-1;
        back=-1;
        arr=new int[n];
    }

//    view  Elements
    void show_elements(){
        int a=1;
        for(int i=front;i<=back;i++){
            cout<<"elements no "<<a<<" is : "<<arr[i]<<"\n";
            a++;
        }
    }

//     insert an Element
    void insert(int value){
        if(back>n-1){
            cout<<"queue is full\n";
            return;
        }
        if(front<0)
            front++;
        back++;
        arr[back]=value;
    }

//    deletion of an Elements
    void dequeue(){
        if(front==-1 || front>back){
            cout<<"queue is empty\n";
            return;
        }
        front++;

    }

//    IsEmpty or IsFull
    void isEmpty(){
        if(back==-1){
            cout<<"queue is empty\n";
            return;
        }
        if(back=n-1){
            cout<<"queue is full\n";
            return;
        }
        else{
            cout<<"there are some elements\n";
        }
    }

//    view front Element
    void viewtop(){
        if(front==-1)
            cout<<"No Elements Found";
        else{
        cout<<"top element is :"<<arr[front]<<"\n";
        }
    }



//    To view specific Element
    void peek(int index){
        if(index>n || index<1){
            cout<<"invalid value\n";
            return;
        }
         cout<<"Element no "<<index<<" is: "<<arr[index-1]<<endl;
    }
};

main(){
    queue q;
    q.insert(3);
    q.insert(8);
    q.insert(4);
    q.insert(6);
    q.insert(5);

    q.show_elements();

    q.isEmpty();

    q.dequeue();

    q.show_elements();
    q.viewtop();
    q.peek(3);
}
