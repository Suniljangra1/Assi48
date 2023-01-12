#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> r;
    r.insert({1,10});
    r.insert({2,20});
    r.insert({3,30});
    r.insert({4,50});
    multimap<int,int>::iterator te;

    te = r.upper_bound(2);
    cout<<te->first << " "<<te->second ;
}