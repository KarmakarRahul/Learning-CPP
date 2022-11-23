#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

bool isEmpty(struct node* ptr){
    if(ptr==nullptr) return 1;
    return 0;
}
bool isFull(struct node* ptr){
    struct node* st=new struct node;
    if(st==nullptr) return 1;
    return 0;
}
struct node* push(struct node* ptr, int x){
     struct node* tem=new struct node;
    if(tem==nullptr){ cout<<"stack is full";}
    else{
     tem->data=x;
     tem->next=ptr;
     ptr=tem;
    }
    return ptr;
}
int pop(struct node** ptr){
    int n;
    if(isEmpty(*ptr)) cout<<"stack is empty";
    else{
     struct node* t=*ptr;
     *ptr=(*ptr)->next;
     n= t->data;
     free(t);
    }
     return n;

}
   void list_traversal( struct node* head){
   struct node* p=head;
    if(p==nullptr){
        cout<<"stack is empty "<<endl;
    }
    while(p!=nullptr){
        cout<<p->data<<endl;
        p=p->next;
    }

}

int main(){
    struct node* top=nullptr;
    top= push(top,34);
    top=push(top,4);
    top=push(top,3);
    cout<<"after pushing "<<endl;
    list_traversal(top);
    cout<<pop(&top);
    cout<<"after poping "<<endl;
    list_traversal(top);
}
