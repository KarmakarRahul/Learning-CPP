#include<bits/stdc++.h>
using namespace std;

void push(stack<int>& s, stack<int>& ss, int v){
    s.push(v);
    if(ss.size()==0 || ss.top()>=v){
        ss.push(v);
    }
    cout<<s.top()<<" "<<ss.top()<<"\n";
}
int pop(stack<int>& s, stack<int>& ss){
    int a=s.top();
    if(s.size()==0) return -1;
    s.pop();
    if(ss.top()==a) ss.pop(); 
    return a;
}
int getmin(stack<int> ss){
    if(ss.size()==0) return -1;
    return ss.top();
}
int main(){
      stack<int> s;
      stack<int> ss;
      system("cls");
      push(s,ss,3);
      push(s,ss,5);
      push(s,ss,7);
      push(s,ss,9);
      push(s,ss,4);
      push(s,ss,2);
      cout<<pop(s,ss)<<"\n";
      cout<<getmin(ss)<<"\n";

}