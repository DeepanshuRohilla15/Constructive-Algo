#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> read(7);
    for(int i = 0; i < 7; i++) cin>>read[i];

    int i = 0;
    while(n > 0)
    {
        n -= read[i];
        if(n <= 0) break;
        i++;
        i = i % 7;
    }
    cout<<i+1;
}
