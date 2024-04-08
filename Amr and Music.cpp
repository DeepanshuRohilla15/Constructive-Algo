#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    vector<pair<int, int>> v;
    
    int b;
    for(int i = 0; i < n; i++)
    {
        cin>>b;
        v.push_back({b, i+1});
    }
    
    sort(v.begin(), v.end());
    
    int days = 0;
    int cnt = 0;
    vector<int> res;
    for(int i = 0; i < n; i++)
    {
        days += v[i].first;
        if(days <= k)
        {
            cnt++;
            res.push_back(v[i].second);
        }
        else break;
    }
    
    cout<<cnt<<"\n";
    for(auto x:res) cout<<x<<" ";
}
