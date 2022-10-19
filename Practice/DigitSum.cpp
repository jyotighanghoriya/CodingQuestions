//Sum of Digits using Recursion
#include<bits/stdc++.h>
using namespace std;
int DigitSum(int Num,int sum=0){
    if(Num==0){
        return sum;
    }
    sum=sum+Num%10;
    DigitSum(Num/10,sum);
}
int main(){
    int num;
    cout<<"enter Number"<<endl;
    cin>>num;
    int s=DigitSum(num);
    cout<<s;
    return 0;
}