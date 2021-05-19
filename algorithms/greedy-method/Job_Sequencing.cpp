#include<bits/stdc++.h>
using namespace std;

struct Job
{
  char Job_ID;
  int deadline;
  int profit;
};

bool comp(Job j1,Job j2)
{
    return j1.profit>j2.profit;
}

void jobSequencing(Job arr[],int n)
{
    sort(arr,arr+n,comp);
    char jobs[n];
    for(int i=0;i<n;i++)
    {
        jobs[i]='0';
    }

    for(int i=0;i<n;i++)
    {
        for(int j=arr[i].deadline-1;j>=0;j--)
        {
            if(jobs[j]=='0')
            {
                jobs[j]=arr[i].Job_ID;
                break;
            }    
        }
    }
    cout<<"Job Sequence is: ";
    for(int i=0;i<n;i++)
    {
        if(jobs[i]!='0')
            cout<<jobs[i]<<" ";
    }
}

int main()
{
    int size=8;
    Job j[size];
    cout<<"JOB_ID DEADLINE PROFIT\n";
    cout<<"------ -------- ------\n";
    for(int i=0;i<size;i++)
    {
        cin>>j[i].Job_ID>>j[i].deadline>>j[i].profit;
    }
    jobSequencing(j,size);
    return 0;
}