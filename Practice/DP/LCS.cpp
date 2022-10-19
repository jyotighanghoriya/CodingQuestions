#include<iostream>
using namespace std;
int lcs(string s1,string s2,int l1,int l2){
    int res[l1+1][l2+1];
    for(int i=0;i<=l1;i++){
        res[i][0]=0;
    }
    for(int j=0;j<=l2;j++){
        res[0][j]=0;
    }
    cout<<"testing array after inserting 0 in the first row and column";
    for(int i=0;i<=l1;i++){
        for(int j=0;j<l2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"after computation"<<endl;
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            if(s1[i]==s2[j]){
                res[i][j]=res[i-1][j-1]+1;
            }
            else{
                res[i][j]=max(res[i-1][j],res[i][j-1]);
            }
        }
    }
    for(int i=0;i<l1;i++){
        for(int j=0;j<l2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return res[l1][l2];
}
int main(){
    string s1;
    string s2;
    cout<<"enter string";
    cin>>s1;
    cin>>s2;
    int l1=s1.length();
    int l2=s2.length();
    int res=lcs(s1,s2,l1,l2);
    cout<<res;
}