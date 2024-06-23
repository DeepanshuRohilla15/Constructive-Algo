stack<int>st;
        int count = 0;
        vector<int>ans;
        
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == '(')
            {
                count++;
                st.push(count);
                ans.push_back(st.top());
            }
            else if(str[i] == ')')
            {
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
