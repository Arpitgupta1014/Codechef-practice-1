class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;

        if(nums.size()<4)
            return ans;

        set<vector<int>> s;
        int n=nums.size();

        sort(nums.begin(),nums.end());

        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                int k=j+1, l=n-1;

                while(k<l){
                    long long int sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target){
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else
                        l--;
                }
            }
        }
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;        
    }
};
