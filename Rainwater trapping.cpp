#include <bits/stdc++.h>
using namespace std;
int rainWaterTrappingproblem(int arr[],int n){
    // rainwater trapping problem
    int maxLeft[n];
    int maxRight[n];
    int maxtillNowLeft;
    maxtillNowLeft=maxLeft[0]=arr[0];
    for(int i=1;i<n;i++){
       maxLeft[i]=max(maxLeft[i-1],arr[i]);
    }
    int maxtillNowRight;
     maxtillNowRight=maxRight[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        maxRight[i]=max(maxRight[i+1],arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=min(maxLeft[i],maxRight[i])-arr[i];
    }
    return sum;
}
int main() {
    int arr[] ={3,0,0,2,0,4};
    cout<<rainWaterTrappingproblem(arr,6);
}
