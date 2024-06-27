int n=mat.size();
    int m=mat[0].size();
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<m-1;j++){
            if(mat[i-1][j]!=mat[i][j+1])return false; // checking for upper and right adjacent cells. if not equal return false 
        }
    }
    return true;
