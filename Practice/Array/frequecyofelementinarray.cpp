#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10, 20, 20, 10, 10, 20, 5, 20};
    map<int,int> m1;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        m1.insert({arr[i],0});
    }
    for(int i=0;i<n;i++){
        if(m1.find(arr[i])!= m1.end()){
            m1[arr[i]]++;
        }
    }
    for(auto itr=m1.begin();itr!=m1.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}