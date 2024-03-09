#include<algorithm>

#include<set>

bool cmp(vector<int> &one,vector<int> &two){

    // if(one[1] == two[1]) return one[2]>two[2];

    return one[2]>two[2];

 

}
vector<int> jobScheduling(vector<vector<int>> &jobs)

{

    int n = jobs.size();

    sort(jobs.begin(),jobs.end(),cmp);

 

    int maxi = 0;

    for(int i = 0;i<n;i++) maxi = max(maxi,jobs[i][1]);

    

    set<int> s;

    for(int i = 1;i<=maxi;i++) s.insert(i);

    

    int count = 0;

    int profit = 0;

    for(int i = 0;i<n;i++){

        int last_moment = jobs[i][1];

        if(s.find(last_moment)!=s.end()){

            s.erase(s.find(last_moment));

            count++;

            profit+=jobs[i][2];

        }

        else{

            auto ub = s.upper_bound(last_moment);

            if(ub != s.begin()){

                ub--;

                s.erase(ub);

                count++;

                profit+=jobs[i][2]; 

            }

        }

        if(s.empty())break;

 

        

    }

 

    return {count,profit};

}
