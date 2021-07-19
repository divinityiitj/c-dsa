#include <iostream>
using namespace std;
vector<int> fourSum(vector<int> &num,int target){
    vector<vector<int>> res;
    if(num.empty()){
        return res;
    }
    int n=num.size();
    sort(num.begin(),num.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int target2=target-num[i]-num[j];
            int front =j+1;
            int back = n-1;
            while(front<back){
                int two_sum = num[front]+num[back];
                if(two_sum<target2){
                    front++;
                }
               else if(two_sum>target2){
                    back--;
                }
                else{
                    vector<int> quadrauple(4,0);
                    quadrauple[0]=num[i];
                    quadrauple[1]=num[j];
                    quadrauple[2]=num[front];
                    quadrauple[3]=num[back];
                    res.push_back(quadrauple);
                    // Processing the duplicates of number 3
                        while (front < back && num[front] == quadruplet[2]) ++front;
                        // Processing the duplicates of number 4
                        while (front < back && num[back] == quadruplet[3]) --back;
                }
            }
            // Processing the duplicates of number 2
                while(j + 1 < n && num[j + 1] == num[j]) ++j;
            }
        
            // Processing the duplicates of number 1
            while (i + 1 < n && num[i + 1] == num[i]) ++i;

        }
    }
    return res;
}
int main() {
    cout<<"Hello World!";
}
