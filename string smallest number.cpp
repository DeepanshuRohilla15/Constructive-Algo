 if(s > d*9)
        {
            return "-1";
        }
        
        string ans = "";
        
        for(int i = d-1; i>= 0; i--)
        {
            if(s > 9)
            {
                ans += "9";
                s = s - 9;
            }
            else{
                
                if(i == 0)
                {
                    ans = to_string(s) + ans;
                    s = s - s;
                }
                else{
                    int temp = s - 1;
                    ans = to_string(temp) + ans;
                    i--;
                    
                    while(i>0)
                    {
                        ans = "0" + ans;
                        i--;
                    }
                    
                    if(i == 0)
                    {
                        ans = "1" + ans;
                        i--;
                    }
                }
            }
        }
        
        return ans;