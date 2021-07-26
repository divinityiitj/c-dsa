#include <iostream>
using namespace std;
vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int>> res; 
        sort(num.begin(), num.end()); 
        
        // moves for a
        for (int i = 0; i < (int)(num.size())-2; i++) {
            //i goes till 3rd last element to avoid going out of bounds
            if (i == 0 || (i > 0 && num[i] != num[i-1])) {
                //i==0 i.e. it is a and second condtion is to skip over duplicates
                int lo = i+1, hi = (int)(num.size())-1, sum = 0 - num[i]; //-a is sum 
                
                while (lo < hi) {
                    if (num[lo] + num[hi] == sum) {
                        
                        vector<int> temp; 
                        temp.push_back(num[i]); 
                        temp.push_back(num[lo]); 
                        temp.push_back(num[hi]); 
                        res.push_back(temp);
                        
                        while (lo < hi && num[lo] == num[lo+1]) lo++; //skip the duplicates 
                        while (lo < hi && num[hi] == num[hi-1]) hi--;
                        //this will now stand on the last duplicate so we need lo++ and hi--
                        lo++; hi--;
                    } 
                    else if (num[lo] + num[hi] < sum) lo++; //kam h to low ko badhana pdega na coz sorted h 
                    else hi--; //jyada h to high ko kam kro 
               }
            }
        }
        return res;
    }
int main() {
    cout<<"Hello World!";
}
