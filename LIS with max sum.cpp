public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    for(int i=0;i<n;i++){
	        dp[i]=arr[i]	    ;
	        
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i]){
	                dp[i]=max(dp[i],dp[j]+arr[i]);
	            }
	        }
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        ans=max(dp[i],ans);
	    }
	    return ans;
	} 
