int longestCONSECUTIVEseq(vector<int> &nums,int n){
    set<int> st;
    for(int num:nums){
        st.insert(num);
    }
    int longestStreak=0;//this is the ans;
    for(int num:nums){
        if(!st.count(num-1)){
            int currentNum=num;
            int currentStreak=1;
            while(st.count(currentNum+1)){
                currentNum++;
                currentStreak++;
            }
            longestStreak=max(longestStreak,currentStreak);
        }
    }
    return longestStreak;
}
