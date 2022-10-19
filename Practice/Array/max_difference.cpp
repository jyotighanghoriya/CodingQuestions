#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& arr) {
    int max_difference=INT_MIN;
    int flag=0;
    int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((max_difference<abs(arr[i]-arr[j])) && (arr[i]<arr[j])){
                    flag=1;
                    max_difference=abs(arr[i]-arr[j]);
                }
            }
        }
        if(flag==0){
            return -1;
        }
        else
            return max_difference;
    }
};