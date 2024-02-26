#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int mini = 0;
    int maxi = 0;
    if(x < y && x < z)
    {
        mini = x;
    }
    else if(y < z && y < x)
    {
        mini = y;
    }
    else 
    {
        mini = z;
    }
    
    if(x > y && x > z)
    {
        maxi = x;
    }
    else if(y > x && y > z)
    {
        maxi = y;
    }
    else
    {
        maxi = z;
    }
    
    cout<<maxi - mini<<"\n";   
}