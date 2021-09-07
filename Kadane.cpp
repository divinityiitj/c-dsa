#include <iostream>
using namespace std;
int main() {
    //program for kadane's algo
    int arr[] ={-7,1,-4,5,1,-3};
    int n =6;
    int max=INT_MIN;
    int currMax=0;
    for(int i=0;i<n;i++)
    {
        currMax+=arr[i];
        if(currMax>max)
        {
            max=currMax;
        }
        if(currMax<0)
        {
            currMax=0;
        }
        
    }
    cout<<max<<endl;
}
