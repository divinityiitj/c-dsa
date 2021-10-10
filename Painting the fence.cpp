class Solution{
    public:
    long long mod = 1e9+7;
    long long countWays(int n, int k){
        // code here
        //code explained in copy and from pepcoding video
        long long same = k;
        long long diff = k*(k-1);
        long long  total = same+diff;
        for(int i=3;i<=n;i++){
            same = diff*1;
            diff = total*(k-1);
            total = (same+diff)%mod;
        }
        return total%mod;
    }
};
//explaination op from pepcoding
