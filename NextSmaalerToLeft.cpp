#include<bits/stdc++.h>
using namespace std;

vector<int> nge(int arr[],int n){
    vector<int> res;
    stack<int> s;
    for(int i=0; i<n; i++){
        if(s.size()==0){
            res.push_back(-1);
        }
        else if(s.size()>0 && s.top()<arr[i]){
            res.push_back(s.top());

        }
        else if(s.size()>0 && s.top()>=arr[i]){
            while(s.size()>0 && s.top()>=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                res.push_back(-1);
            }
            else{
                res.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    return res;
}
int main(){
    int arr[]={1,3,2,4};
    vector<int> res=nge(arr,4);
    for(auto i:res){
        cout<<i<<" ";
    }
}