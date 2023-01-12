#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> u;
    u.insert({1,10});
    u.insert({2,12});
    u.insert({2,30});
    u.insert({4,50});
    u.insert({5,60});
    u.insert({6,70});
    u.insert({7,80});
    int r;
    cout<<"Enter value ";
    cin>>r;
    multimap<int,int>::iterator it;
    for(it = u.begin(); it!=u.end(); it++)
    {
        if(it->second == r)
        {
            cout<<"Element Founded ";
            break;
        }
       
    }
    if(it->second!=r)
    cout<<"Element Not founded ";
        
}