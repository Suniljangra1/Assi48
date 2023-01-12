#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> u;
    u.insert({1,10});
    u.insert({2,12});
    u.insert({3,30});
    u.insert({4,50});
    u.insert({5,60});
    u.insert({6,70});
    u.insert({7,80});
    cout<<"\nBefore erase \n";
    for(auto i : u)
    {
        cout<<i.first<<" "<<i.second <<endl;
    }
    cout<<"\nAfter Erase \n";
    multimap<int,int>::iterator it;
    u.erase(it);
    for(auto i : u)
    {
        cout<<i.first<<" "<<i.second <<endl;
    }
}