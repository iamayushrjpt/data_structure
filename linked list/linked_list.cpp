#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
};


void traversal(node *ptr){
    while(ptr->next!=NULL){
        cout<<"Element is "<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<"Element is "<<ptr->data<<endl;
}

//insert Element at the first
node* Insert_Element_At_First(int value,node*ptr){
    node*p=new node;
    p->data = value;
    p->next = ptr;
    return p;
}

//insert Element at the End
node* Insert_Element_At_End(int value,node*ptr){
    node*p=new node;
    ptr->next=p;
    p->data = value;
    p->next = NULL;
    return p;
}

// insert Element at the after a node
node* Insert_Element_After_Node(int value,node*ptr){
    node*p=new node;
    p->data = value;
    p->next = ptr->next;
    ptr->next=p;
    return p;
}

//insert Element in between by index
node* Insert_Element_In_Between(int value,node*head,int index){
    node*p=new node;
    node*ptr=head;
    int i=0;
    while(i!=index-1){
    ptr=ptr->next;
    i++;
    }
    p->data=value;
    p->next=ptr->next;
    ptr->next=p;
    return head;
}


main(){
    node *head=new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;

    head->data=7;
    head->next=second;

    second->data=78;
    second->next=third;

    third->data=67;
    third->next=fourth;

    fourth->data=11;
    fourth->next=NULL;

//    head=Insert_Element_At_First(0,head);
//    Insert_Element_In_Between(0,head,4);
//    Insert_Element_After_Node(0,second);
//    Insert_Element_At_End(0,fourth);
    
}

