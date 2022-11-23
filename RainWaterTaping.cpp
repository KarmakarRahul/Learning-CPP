#include<bits/stdc++.h>
using namespace std;

int taping(vector<int> arr){
    int n=arr.size();
    int mright[n];
    int mleft[n];
    mleft[0]=arr[0];
    for(int i=1; i<n; i++){
        mleft[i]=max(mleft[i-1],arr[i]);
        cout<<mleft[i]<<" ";
    }
    cout<<"\n";
    mright[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--){
        mright[i]=max(mright[i+1],arr[i]);
        cout<<mright[i]<<" ";
    }
    cout<<"\n";
    int sum=0;
    vector<int> water(n);
    for(int i=0; i<n; i++){
        water[i]=min(mleft[i],mright[i])-arr[i];
        cout<<water[i]<<" ";
       // sum=sum+water[i];
    }
     for(int i=0; i<n; i++){
       sum=sum+water[i];
    }
    return sum;
}
int main(){
    vector<int> a={3,0,0,2,0,4};
    cout<<taping(a);

}