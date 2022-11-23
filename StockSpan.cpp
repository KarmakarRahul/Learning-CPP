#include<bits/stdc++.h>
using namespace std;

vector<int> nge(int arr[],int n){
    vector<int> res;
    stack<pair<int,int>> s;
    for(int i=0; i<n; i++){
        if(s.size()==0){
            res.push_back(-1);
        }
        else if(s.size()>0 && s.top().first>arr[i]){
            res.push_back(s.top().second);

        }
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                res.push_back(-1);
            }
            else{
                res.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
   cout<< res.size()<<"\n";
    for(int i=0; i<res.size(); i++){
        res[i]=i-res[i];
    }
    return res;
}
int main(){
    int arr[]={100,80,60,70,60,75,85};
    vector<int> res=nge(arr,7);
    for(auto i:res){
        cout<<i<<" ";
    }
}