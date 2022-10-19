#include<bits/stdc++.h>
using namespace std;
void permutation(string str,int n,int index=0){
    if(index==str.length()-1){
        cout<<str<<endl;
        return;
    }
    for(int i=index;i<n;i++){
        swap(str[i],str[index]);
        permutation(str,n,index+1);
        swap(str[i],str[index]);
    }
    
}
int main(){
    string str;
    cout<<"enter string";
    cin>>str;
    permutation(str,str.length());
}