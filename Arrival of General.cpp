#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int maxValue = 0;
    int minValue = 1000;
    int maxindex = 0;
    int minindex = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        
        if(x > maxValue)
        {
            maxValue = x;
            maxindex = i;
        }
        if( x <= minValue)
        {
            minValue = x;
            minindex = i;
        }
    }
    
    if(maxindex > minindex)
    {
        cout<<(maxindex - 1) + (n - minindex) - 1;
    }
    else
    {
        cout<<(maxindex - 1) + (n - minindex);
    }
    
}
