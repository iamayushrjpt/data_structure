#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *right;
    node *left;
};

//traverse in preorder
void preorder(node*root){
    if(root!=NULL ){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

//traverse in postorder
void postorder(node*root){
    if(root!=NULL ){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}


//traverse in inorder
void inorder(node*root){
    if(root!=NULL ){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

//create a node
node* create_node(int value){
    node*n=new node;
    n->data=value;
    n->left=NULL;
    n->right=NULL;
    return n;
}

main(){
    node*p,*p1,*p2,*p3,*p4;
    p=create_node(2);
    p1=create_node(5);
    p2=create_node(6);
    p3=create_node(9);
    p4=create_node(1);


    p->left=p1;
    p->right=p2;
    p2->left=p3;
    p2->right=p4;

    cout<<"inorder - ";
    inorder(p);
    cout<<endl;
    cout<<"preorder - ";
    preorder(p);
    cout<<endl;
    cout<<"postorder - ";
    postorder(p);
}
