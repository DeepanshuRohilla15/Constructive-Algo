long long count=0,n=0;
        bool indicate=false;
        for(char x:sentence)
        {
            if(x>='0' && x<='9')
            {
                n=n*10+(x-'0');
                if(x=='9')
                indicate=true;
            }
            else if(x==' ')
            {
                if(!indicate)
                count=max(count,n);
                indicate=false;
                n=0;
            }
        }
        if(indicate==false)
        count=max(count,n);
        return count==0?-1:count;
