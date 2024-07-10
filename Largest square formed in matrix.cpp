int res=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i>0 and j>0 and mat[i][j]==1){
                    mat[i][j]=min({mat[i][j-1],mat[i-1][j-1],mat[i-1][j]})+1;
                }
                res=max(res,mat[i][j]);
            }
        }
        
        return res;