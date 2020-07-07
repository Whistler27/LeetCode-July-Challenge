class Solution {
public:
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n; i++){
            for(int j=0;j<m; j++){
                if(grid[i][j]==0) continue;
                int cur=0;
                if(i>0) if(grid[i-1][j]==1) cur++;
                if(i<n-1) if(grid[i+1][j]==1) cur++;
                if(j>0) if(grid[i][j-1]==1) cur++;
                if(j<m-1) if(grid[i][j+1]==1) cur++;
                
                
                ans+=(4-cur);
            }
        }
        
        return ans;
        
    }
};