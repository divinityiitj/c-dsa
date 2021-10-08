class Solution{
public:
    int t[101][101];
    int solve(int arr[],int i,int j){
        if(i>=j){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int mn =INT_MAX;
        for(int k=i;k<j;k++){
            int tempans = solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[j]*arr[k];
            mn = min(mn,tempans);
        }
        return t[i][j]=mn;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        int i=1;
        int j=N-1;
        memset(t,-1,sizeof(t));
        return solve(arr,i,j);
    }
};
