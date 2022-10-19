//Generate subsets of a string
#include<bits/stdc++.h>
using namespace std;

void GenerateSubset(string str,string curr="",int index=0){
    if(index==str.length()){
        cout<<curr<<endl;
        return;
    }
    GenerateSubset(str,curr+str[index],index+1);
    GenerateSubset(str,curr,index+1);
    
}
int main(){
    string str;
    cout<<"enter string";
    cin>>str;
    GenerateSubset(str);
    return 1;
}