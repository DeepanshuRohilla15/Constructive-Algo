long long solve(vector<vector<vector<long long>>>& dp,int x,int y,int k){
        if(x==3 && (y==0 || y==2)){
            return 0;
        }
        if(k==0){
            return 1;
        }
        
        if(dp[x][y][k]!=-1){
            return dp[x][y][k];
        }
        
        long long self=solve(dp,x,y,k-1);
        
        long long top=0;
        if(x-1>=0){
            top+=solve(dp,x-1,y,k-1);
            
        }
        long long bottom=0;
        if(x+1<4){
            bottom+=solve(dp,x+1,y,k-1);
        }
        long long left=0;
        if(y-1>=0){
            left+=solve(dp,x,y-1,k-1);
        }
        long long right=0;
        if(y+1<3){
            right+=solve(dp,x,y+1,k-1);
        }
        
        return dp[x][y][k]=(top+bottom+left+right+self);
        
    }
    long long getCount(int n) {
        // Your code goes here
        vector<vector<vector<long long>>> dp(4,vector<vector<long long>>(3,vector<long long>(26,-1)));
        
        long long ans=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                if(i==3 && (j==0 || j==2)){
                    continue;
                }
                ans+=solve(dp,i,j,n-1);
            }
        }
        
        return ans;
    }
