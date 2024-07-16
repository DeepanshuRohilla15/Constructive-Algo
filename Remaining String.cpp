string remainingstr ="";
        
        for(int i=0;i<s.length();i++){
            if(s[i]==ch && count>0)
            count--;
           else if(count==0)
            remainingstr+=s[i];
        }
        return remainingstr;