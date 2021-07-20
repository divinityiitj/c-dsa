#include <iostream>
using namespace std;
//longest substring w/o repeating
int solve(string s){
    int ans=0;
    int n=s.length();
    vector<int> visited(256,-1);
    int left=0;int right=0;
    while(right<n){
        //to traverse
        if(visited[s[right]]!=-1){
            //that is that char has not been encountered yet;
            left=max(visited[s[right]]+1,left);
            //we dont update it if it is lying left to it it is not in the range of our ans
            visited[s[right]]=right; //we update the last seen index of the char eg a was 1st at 4 and then at 7 
            //so a is at 7 now
            ans=max(ans,right-left+1);
            right++;

        }
    }
}
int main() {
    cout<<"Hello World!";
}
