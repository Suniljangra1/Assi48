#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> p;
    p.insert({1,10});
    p.insert(pair<int,int>(2,20));
    p.insert(pair<int,int>(3,40));
    p.insert(pair<int,int>(4,50));
    cout<<"With out swaping  \n";
    for(auto i: p)
    {
        cout<<i.first<<" "<<i.second<<" \n";
    }
    multimap<int,int> p1;
    p1.swap(p);
    cout<<"\nAfter Swaping \n";
    for(auto i: p1)
    {
        cout<<i.first<<" "<<i.second<<" \n";
    }
}