class Solution{
public:
    long long mod = 1e9+7;
    int nCr(int n, int r){
        // code here
       int t[n+1][r+1];
       if(n<r){
           return 0;
       }
       if(r>n-r){
           r=n-r; //for optimisation
       }
       memset(t,0,sizeof(t));
       // t[n][n]=1;t[n][0]=1;
       for(int i=1;i<=n;i++){
           for(int j=0;j<=r;j++){
               if(i==j){
                   t[i][j]=1;
               }
               
               
           }
       }
       for(int i=1;i<=n;i++){
           t[i][0]=1;
       }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=r;j++){
                if(i>j){
                t[i][j]=(t[i-1][j-1]+t[i-1][j])%mod;
                }
                if(i<j){
                   t[i][j]=0;
               }
            }
        }
        return (t[n][r])%mod;
    }
};
