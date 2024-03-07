#include<bits/stdc++.h>

bool comp(pair<int, int>a, pair<int, int> b)
{
    return a.second < b.second;
}

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int, int>> v;
    for(int i = 0; i < start.size(); i++)
    {
        v.push_back({start[i], finish[i]});
    }

    sort(v.begin(), v.end(), comp);
    int count = 1;
    int limit = v[0].second;
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i].first >= limit)
        {
            count++;
            limit = v[i].second;
        }
    }
    return count;
}
