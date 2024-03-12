class Solution {
public:
    void solve(int col,vector<vector<string>>&dev,vector<string>&ans,int n,vector<int>&left,vector<int>&upper,vector<int>&lower){
        if(col==n){
            dev.push_back(ans); 
            return;
        }
        for(int row=0;row<n;row++){
            if(left[row]==0 && lower[row+col]==0 && upper[n-1+col-row]==0){
                ans[row][col]='Q';
                left[row]=1;
                lower[row+col]=1;
                upper[n-1+col-row]=1;
                solve(col+1,dev,ans,n,left,upper,lower);
                ans[row][col]='.';
                left[row]=0;
                lower[row+col]=0;
                upper[n-1+col-row]=0;
            }
        }
    }
    public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>dev;
        vector<string>ans(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            ans[i]=s;
        }
        vector<int>left(n,0),upper(2*n-1,0),lower(2*n-1,0);
        solve(0,dev,ans,n,left,upper,lower);
        return dev;
    }
};
