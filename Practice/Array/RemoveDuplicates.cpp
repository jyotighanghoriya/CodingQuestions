#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,10,10,20,20,20,30,30,70,90,100};
    int s=sizeof(arr)/sizeof(arr[0]);
    int repeating_value=arr[0];
    for(int i=1;i<s;i++){
        if(repeating_value!=arr[i]){
            cout<<repeating_value<<" ";
            repeating_value=arr[i];
        }
    }
}


// Approach: Consider the first element to be repeating and compare with other adjacent element if you are finding other elements same then those elements are repeating elements 