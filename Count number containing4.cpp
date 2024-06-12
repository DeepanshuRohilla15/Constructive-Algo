class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int count = 0;
        
        for(int i = 4;i<=n;i++){
            
            string str = to_string(i);
            bool flag = false;
            
            for(char c : str)
                if(c == '4'){
                    flag = true;
                    break;
                }
                    
            if(flag)
                count++;
        }
        
        return count;
    }
};
