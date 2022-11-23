#include<bits/stdc++.h>
using namespace std;

vector<int> NSR(int a[],int n){
    int index=2;
    vector<int> res;
    stack<pair<int,int>> s;
    for(int i=n-1; i>=0; i--){
        if(s.size()==0){
            res.push_back(index);
        }
        else if(s.size()>0 && s.top().first<a[i]){
            res.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=a[i]){
            while(s.size()>0 && s.top().first>=a[i]){
                s.pop();
            }
            if(s.size()==0){
                res.push_back(index);
            }
            else{
                res.push_back(s.top().second);
                        }            
        }
        s.push({a[i],i});
    }
    reverse(res.begin(),res.end());
    return res;
}

vector<int> NSL(int a[],int n){
    int index=-1;
    vector<int> res;
    stack<pair<int,int>> s;
    for(int i=0; i<n; i++){
        if(s.size()==0){
            res.push_back(index);
        }
        else if(s.size()>0 && s.top().first<a[i]){
            res.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=a[i]){
            while(s.size()>0 && s.top().first>=a[i]){
                s.pop();
            }
            if(s.size()==0){
                res.push_back(index);
            }
            else{
                res.push_back(s.top().second);
                        }            
        }
        s.push({a[i],i});
    }
    return res;
}

int maxx(int a[],int n){
    int m=0;
    for(int i=0; i<n; i++){
        m=max(m,a[i]);
    }
    return m;
}

int MAH(int a[],int n){
    vector<int> right=NSR(a,n);
    vector<int> left=NSL(a,n);
    vector<int> width(n);
    for(int i=0; i<n; i++){
        width[i]=right[i]-left[i]-1;
    }
    for(int i=0; i<n; i++){
        a[i]=width[i]*a[i];
    }
    return maxx(a,n);
}
int main(){
    int a[]={2,4};
    int ans=MAH(a,2);
    cout<<ans<<" ";
}