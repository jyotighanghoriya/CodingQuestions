// Palindrome check using recursion
#include<bits/stdc++.h>
using namespace std;
int PalindromeCheck(string s,int l,int start=0){
    if(start>=l){
        return 1;
    }
    if(s[start]==s[l-1]){
        PalindromeCheck(s,l-1,start+1);
    }
    else{
        return 0;
    }
}

int main(){
    string str;
    cout<<"enter string";
    cin>>str;
    cout<<"entered string"<<str<<endl;
    int l=str.length();
    if(PalindromeCheck(str,l)){
        cout<<"string is palindrome"<<endl;
    }
    else{
        cout<<"string is not palindrome"<<endl;
    }
    return 0;
}