 while(s[0] == '0'){
            s.erase(s.begin());
        }
        // if all 0's then string will be empty so return "1"
        if(s == ""){
            return "1";
        }
        // c -> carry bit
        int c = 1;
        int n = s.size();
        // add using for loop and use carry bit for the same
        for(int i = n-1; i > -1 ; i--){
            if(s[i] == '1' && c == 1){
                // 1 + 1 = 0
                // carry = 1
                s[i] = '0';
                c = 1;
            } else if(s[i] == '0' && c == 1){
                // 0 + 1 = 1
                s[i] = '1';
                c = 0;
            } else{
                // no need to change s[i]
                continue;
            }
        }
        // if c == 1 at end then add "1" to string starting
        if(c == 1){
            s = '1' + s;
        }
        return s;
