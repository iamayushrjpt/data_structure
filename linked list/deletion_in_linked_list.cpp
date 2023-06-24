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

//case 1 : Delete Element At First
 node* delete_At_First(node*head){
    node*ptr=head;
    head=head->next;
    delete ptr;
    return head;
 }

//case 2 : Delete Element By Index
node* delete_By_Index(node*head,int index){
    node*p=head;
    node*q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    return head;
}

//case 3 : Delete Element At Last
node* delete_At_Last(node*head){
    node*p=head;
    node*q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    return head;
}

//case 4 : Delete Element By Value
node* delete_By_Value(node* head,int value){
    node*p=head;
    node*q=head->next;
    if(p->data==value){
        q=p->next;
        return q;
    }
    while(q->data!=value){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
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

//    traversal(head);

//    head=delete_At_First(head);      <- case 1
//    traversal(head);

//    head=delete_By_Index(head,2);    <- case 2
//    traversal(head);
//
//    head=delete_At_Last(head);       <- case 3
//    traversal(head);

//    head=delete_By_Value(head,11);   <- case 4
//    traversal(head);
}

