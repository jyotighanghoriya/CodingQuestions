//Rope Cutting Problem
Example 1:

Input : n = 5, a = 2, b = 5, c = 1
Output : 5
(We make 5 pieces of length 1 each)

Example 2:

Input : n = 23, a = 12, b = 9, c = 11
Output : 2
(We make 2 pieces of length 11 and 12)

Example 3:

Input : n = 5, a = 4, b = 2, c = 6
Output : -1
(Not Possible)

#include<iostream>
#include<algorithm>
using namespace std;
int MaxCuts(int n,int a,int b,int c){
    if(n==0) // if 0 value is reached that means no further cuts are possible and we have got our cut which we were looking
        return 0;
    if(n<=0)// this means cut is not possible
        return -1;
    int res=max(MaxCuts(n-a,a,b,c),max(MaxCuts(n-b,a,b,c),MaxCuts(n-c,a,b,c)));
    if(res == -1) return -1;
    else{
      res=res+1;
    }
    return res;   
}
int main(){
    int n;
    int a,b,c;
    cin>>n;
    cin>>a;
    cin>>b;
    cin>>c;
    int res=MaxCuts(n,a,b,c);
    cout<<res;
    return 0;
}