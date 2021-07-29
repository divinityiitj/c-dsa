#include <iostream>
using namespace std;
void returnPermutation(vector<int> &ds,vector<int> &nums,vector<vector<int>>&ans, int freq[]){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return;
    }
    //iterate over entire array and do permutation for each element;
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            //i.e. not taken yet the element
            ds.push_back(nums[i]);
            freq[i]=1;
            returnPermutation(ds,nums,ans,freq);
            //as for next permutation we will take the elment again somewhere
            freq[i]=0;
            ds.pop_back();
            //we nedd to empty the ds after every entry.
        }
    }
}
void recurPermutate(int index,vector<int>&nums, vector<vector<int>> &ans){
    if(index==nums.size()){
        ans.push_back(nums);
    }
    //here we do swapping of elements to generate all permutations
    for(int i=index;i<n;i++){
        swap(nums[index],nums[i]);
        recurPermutate(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
}
vector<vector<int>> permute(vector<int> &nums){
    vector<vector<int>> ans;
    recurPermutate(0,nums,ans);
}
int main() {
    //cout<<"Hello World!";
    vector<int> ds;
    vector<int> nums;//take input
    int freq[nums.size()]={0};
}
