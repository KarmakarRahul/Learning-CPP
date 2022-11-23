#include<bits/stdc++.h>
using namespace std;

bool isOperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' ) return true;
    return false;
}
int prec(char ch){
    if(ch=='*' || ch=='/') return 3;
    else if(ch=='+' || ch=='-') return 2;
    return -1;
}
 string infix_to_postfix(string infix){
    string postfix;
    int i=0;
    stack<char> st;
    for(int i=0; i<infix.length(); i++){
        if(!isOperator(infix[i])){
            postfix+=infix[i];
            //cout<<postfix[j];
            
        }
        else{
           while(!st.empty() && prec(st.top() >= prec(infix[i]))){
            postfix+=st.top();
            st.pop();
           }
           st.push(infix[i]);
        }
    }
    while(!st.empty()){
        postfix+=st.top();
        st.pop();
    }
   return postfix;
}

int main(){
    string infix="a+b-c/d*a";
    cout<<infix_to_postfix(infix);
    return 0;
}