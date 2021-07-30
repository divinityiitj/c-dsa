#include <iostream>
using namespace std;
//not writing the driver code only the recursive one
//combination sum problem
void combinationSum(int index,int target,vector<int> &arr,vector<vector<int> &ans, vector<int> &ds){
    if(index==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[index]<=target){
        //i.e. we pick up the element
        ds.push_back(arr[index]);
        combinationSum(index,target-arr[index],arr,ans,ds);
    ds.pop_back();
    }
    //dont pick up the elemnt
    combinationSum(index+1,target,arr,ans,ds);
}
int main() {
    cout<<"Hello World!";
}
