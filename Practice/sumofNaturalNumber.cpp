#include<bits/stdc++.h>
using namespace std;
int naturalNumSum(int n,int sum=0){
    if(n==0){
        return sum;
    }
    sum=sum+n;
    naturalNumSum(n-1,sum);
}
int main(){
    int n,sum;
    cout<<"enter number";
    cin>>n;
    sum=naturalNumSum(n);
    cout<<"Sum of natural number is"<<sum;
    return 0;
}