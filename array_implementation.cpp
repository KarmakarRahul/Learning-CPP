#include<bits/stdc++.h>
using namespace std;

struct stac {
    int size;
    int top;
    int *ar;
};

bool isEmpty(struct stac* st){
    if(st->top==-1) return 1;
    return 0;
}
bool isFull(struct stac* st){
    if(st->top==st->size-1) return 1;
    return 0;
}
void push(struct stac* st, int val){
    if(isFull(st)) cout<<"stack is full";
    else
    st->top++;
    st->ar[st->top]=val;
}
int pop(struct stac* st){
    if(isEmpty(st)) cout<<"stack is empty";
    else{
    int val=st->ar[st->top];
    st->top--;
    return val;}
    return -1;
}
int top_val(struct stac* st){
     if(st->top==-1)
        return -1;
      else
        return st->ar[st->top];
}


int main(){
    struct stac* st=new struct stac;
    st->size=5;
    st->top=-1;
    st->ar=new int(st->size);
    push(st,23);
    push(st,66);
    push(st,56);
    push(st,32);
    push(st,34);
    cout<<"value after pushing top = "<<top_val(st)<<endl;
    cout<<pop(st)<<endl;
    cout<<pop(st)<<endl;
    cout<<pop(st)<<endl;
    cout<<pop(st)<<endl;
    cout<<"value after poping top = "<<top_val(st)<<endl;
    if(isEmpty(st)) cout<<"stack is emty"<<endl;
    else cout<<"stack is not empty";
}