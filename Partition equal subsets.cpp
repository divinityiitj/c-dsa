class Solution{
public:
    bool subsetSum(int n,int arr[],int s){
        bool t[n+1][s+1];
	for(int i=0;i<=n;i++){
		t[i][0]=true;
	}
	for(int j=1;j<=s;j++){
			t[0][j]=false;
		}
	
	//t[0][0]=true;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<s+1;j++){
			if(arr[i-1]<=j){
				t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
			}
			else{
				t[i][j]=t[i-1][j];
			}
		}
	}
	return t[n][s];
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2!=0){
            return 0;
        }
        bool ans = subsetSum(N,arr,sum/2);
        if(ans){
            return 1;
        }
        return 0;
    }
};
