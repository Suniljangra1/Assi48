#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> mn;
    mn.insert({1,2});
    mn.insert({2,45});
    mn.insert({3,45});
    mn.insert({6,45});
    mn.insert({4,5});
    multimap<int,int>::iterator e;
    for(auto e=mn.begin(); e!=mn.end(); e++)
    {
        cout<<(*e).first<<" "<<(*e).second<<"\n";
    }
    mn.erase(e);
    for(auto e=mn.begin(); e!=mn.end(); e++)
    {
        cout<<(*e).first<<" "<<(*e).second<<"\n";
    }
}