#include<bits/stdc++.h>
using namespace std;

struct Activity
{
  char Activity_ID;
  pair<int,int> Time;
};

bool comp(Activity a1,Activity a2)
{
    return a1.Time.second<a2.Time.second;
}

int main()
{
    Activity a[8];
    cout<<"Enter activity id and time slots:\n ";
    for(int i=0;i<8;i++)
    {
        cin>>a[i].Activity_ID>>a[i].Time.first>>a[i].Time.second;    
    }
    sort(a,a+8,comp);
    vector<Activity> selected;
    selected.push_back(a[0]);
    int previous=a[0].Time.second;
    for(int i=1;i<8;i++)
    {
        if(a[i].Time.first>=previous)
        {
            selected.push_back(a[i]);
            previous=a[i].Time.second;
        }
    }
    cout<<"Selected Activities are:";
    for(auto it=selected.begin();it!=selected.end();it++)
    {
        cout<<(*it).Activity_ID<<": "<<(*it).Time.first<<"-"<<(*it).Time.second<<endl;
    }    
    return 0;
}