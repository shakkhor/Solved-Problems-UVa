#include<bits/stdc++.h>
using namespace std;

struct JOB
{
    int time;
    int fine;
    int num;
};

bool comp(const JOB &job1, const JOB&job2)
{
    return job1.time * job2.fine < job2.time * job1.fine;
}

int main()
{
    int t,n,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        JOB job[n];

        for (i= 0; i<n; ++i)
        {
            cin>>job[i].time>>job[i].fine;
            job[i].num =i+1;
        }


        stable_sort(job,job+n, comp);

        cout << job[0].num;
        for (int i = 1; i<n; ++i)
            cout<<" "<<job[i].num;
        cout << endl;

        if (t)
            cout<<endl;
    }
    return 0;
}
