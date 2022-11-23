#include<bits/stdc++.h>
using namespace std;

int main(){
    string st="rahul karmakar";
    stack<char> s;
    for(int i=0; i<st.length(); i++){
        char ch=st[i];
        s.push(ch);
    }
    string ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    cout<<ans;
}