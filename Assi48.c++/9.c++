#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> k;
    k.insert({1,10});
    k.insert({2,20});
    k.insert({3,30});
    k.insert({4,50});
    multimap<int,int> ::iterator s,e;
    int t;
    cout<<"Enter which vlaue you find out ";
    cin>>t;
    s = k.find(t);
    multimap<int,int>::iterator it;
    for(it = k.begin(); it!=k.end(); it++)
    {
        if(it->second == t)
        {
            cout<<"Element Founded ";
            break;
        }
       
    }
    if(it->second!=t)
    cout<<"Element Not founded ";
}