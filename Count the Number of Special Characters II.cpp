class Solution {
public:
    int numberOfSpecialChars(string s) {
        int n = s.length();
        int count = 0;
        vector<int> a(150, -1);
        vector<int> b(150, -1);

        for(int i = 0; i < n; i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                if(a[s[i]] == -1) a[s[i]] = i;
            }
            else
            {
                b[s[i]] = i;
            }
        }

        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] == -1 || b[i+32] == -1) continue;
            if(b[i+32] < a[i]) count++;
        }

        return count;
    }
};
