#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int arr[]={3,1,3};
    int n=3;
    int sum = n*(n+1)/2;
    int sqsum = n*(n+1)*(2*n+1)/6;
    //int sumarr,sqsumarr=0;
    for(int i=0;i<n;i++){
        sum-=arr[i];
        sqsum-=arr[i]*arr[i];
    }
    int missing = (sum+sqsum/sum)/2;
    int repeating = (-sum+sqsum/sum)/2;
    cout<<missing<<" "<<repeating;
    
}
