int i, j;
        if(q == 1 || q > 2*n)
            return 0;
            
        long long midCnt = n;
        long long midEle = n+1;
        
        long long ans = 0;
        
        if(q >= midEle){
            ans = midCnt - q + midEle;
        }
        else{
            ans = midCnt - midEle + q;
        }
        
        return ans;
