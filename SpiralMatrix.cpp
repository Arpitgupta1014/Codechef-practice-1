class Solution {
   
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
               
        int m = matrix.size();
        int n=matrix[0].size();
        
      //  cout<<m<<" "<<n<<" "<<endl;
        
        int left=0,right=n-1,top=0,bottom=m-1,dir=0;
        vector<int> ans;
        
        while(left<=right && top<=bottom){
            if(dir==0){
                for(int i=left; i<=right; i++){
                    //cout<<matrix[top][i]<<" ";
                   ans.push_back(matrix[top][i]);
                }              
                
                top++;
                
            }
            
            else if(dir==1){
                for(int i=top; i<=bottom; i++){
                   // cout<<matrix[i][right]<<" ";
                    ans.push_back(matrix[i][right]);
                }
                                
                right--;  
                
            }
            
            else if(dir==2){
                for(int i=right; i>=left; i--){
                    //cout<<matrix[bottom][i]<<" ";
                    ans.push_back(matrix[bottom][i]);
                }
                                
                bottom--;
                
            }
            
            else if(dir==3){
                for(int i=bottom; i>=top; i--){
                    //cout<<matrix[i][left]<<" ";
                    ans.push_back(matrix[i][left]);
                }
                                
                left++;
                
            }
            
            dir=(dir+1)%4;
        }
        return ans;
    }
};
