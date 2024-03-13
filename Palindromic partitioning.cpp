bool isPalindrome(const string &s, int start, int end)
{
    while(start <= end)
    {
        if(s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}

void func(int index, const string &s, vector<string>&path, vector<vector<string>> &res)
{
    if(index == s.size())
    {
        res.push_bAack(path);
        return;
    }

    for(int i = index; i < s.size(); i++)
    {
        if(isPalindrome(s, index, i))
        {
            path.push_back(s.substr(index, i - index + 1));
            func(i+1, s, path, res);
            path.pop_back();
        }
    }
}

vector<vector<string>> partition(const string &s) {
    vector<vector<string>> res;
    vector<string> path;
    func(0, s, path, res);
    return res;
}
