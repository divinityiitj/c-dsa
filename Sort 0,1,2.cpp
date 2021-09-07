#include <bits/stdc++.h>
using namespace std;
int main() {
///    cout<<"Hello World!";
int arr[]={0,1,1,2,1,0,2,1,0};
int n = 9;
int low=0;
int  mid=0;
int high =n-1;
/*for(int i=0;i<n;i++){
    if(arr[mid]==0){
        swap(arr[mid++],arr[low++]);
    }
    if(arr[mid]==1){
        mid++;
    }
    if(arr[mid]==2){
        swap(arr[mid],arr[high--]);
    }
}*/
while(mid<=high){
    switch(arr[mid]){
        case 0:
            swap(arr[mid++],arr[low++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid],arr[high--]);
            break;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
