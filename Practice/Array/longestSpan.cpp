// Given two binary arrays, arr1[] and arr2[] of the same size n. Find the length of the longest common span (i, j) where j >= i such that arr1[i] + arr1[i+1] + …. + arr1[j] = arr2[i] + arr2[i+1] + …. + arr2[j].
// The expected time complexity is Θ(n)
// Naive approach would be to find all subarrays of two arrays, compare the sum of both subarrays and if sum of both subarrays are same then check length of span(array length) find the longest subarray among all the subarrays which have common sum.

#include<iostream>
using namespace std;
int LongestSpan(int arr1[],int arr2[],int n){
    cout<<"elements of first array";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"elements of second array are:";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"longest span of two arrays are:";
    int maxLength=0;
    for(int i=0;i<n;i++){
        int sum1=0;
        int sum2=0;
        for(int j=i;j<n;j++){
            sum1=sum1+arr1[j];
            sum2=sum2+arr2[j];
            if(sum1==sum2){
                int len=j-i+1;
                if(maxLength<len){
                    maxLength=len;
                }
            }   
        }
    }
    return maxLength;
}
int main(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    cout<<"enter elements of first array";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int res=LongestSpan(arr1,arr2,n);
    cout<<res;
}

// 6
// 0 1 0 0 0 0
// 1 0 1 0 0 1
