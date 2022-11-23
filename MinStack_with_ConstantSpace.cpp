#include<bits/stdc++.h>
using namespace std;
int minval=0;

void push(stack<int>& s, int v){
    if(s.size()==0){
        s.push(v);
        minval=v;
    }
    else if(v>=minval){
        s.push(v);
    }
    else{
        s.push(2*v - minval);
        minval=v;
    }
}
void pp(stack<int>& s){
    if(s.size()==0){
        return;
    }
    else {
        if(s.top()>=minval) s.pop();
        else if(s.top()<minval) {
            minval=2*minval-s.top();
            s.pop();
        }
    }
}
    int getmin(stack<int>& s){
        if(s.size()==0) return -1;
        return minval;
    }
int main(){
    stack<int> s;
    push(s,3);
    push(s,5);
    push(s,8);
    push(s,2);
    push(s,4);
    push(s,1);
   // pp(s);
    cout<<getmin(s);
}