class Solution {
public:
    int find(int i,int j ,vector<int>& nums, vector<vector<int>> &dp){
        if(i>j){
            return 0;
        }
       if(i==j){
           return nums[i];
       }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans1=nums[i]+min(find(i+1,j-1,nums,dp),find(i+2,j,nums,dp));
        int ans2=nums[j]+min(find(i,j-2,nums,dp),find(i+1,j-1,nums,dp));
        return dp[i][j]= max(ans1,ans2);
        
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(n==1){
         return true;
        }
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
       int ans= find(0,n-1,nums,dp);
        if(ans>=sum-ans){
            return true;
        }
       return false;
    }
};
