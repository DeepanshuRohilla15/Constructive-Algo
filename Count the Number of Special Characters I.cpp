class Solution {
public:
    int numberOfSpecialChars(string word) {
        int small[26] = {0};
        int capital[26] = {0};
        int count = 0;

        for(char c : word)
        {
            if(c >= 'a' && c <= 'z')
            {
                small[c-'a'] = 1;
            }
            else if(c >= 'A' && c <= 'Z')
            {
                capital[c-'A'] = 1;
            }
        }

        for(int i = 0; i < 26; i++)
        {
            if(small[i] == 1 && capital[i] == 1)
            {
                count++;
            }
        }
        return count;
    }
};
