#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> r;
    if(r.empty())
        cout<<"Map is empty";
        else 
        cout<<"Map is not empty ";
         cout<<"\n";
    r.insert({1,10});
    r.insert({2,20});
    r.insert({3,30});
    r.insert({4,50});
    multimap<int,int>::iterator te;
 cout<<"\n";
    for(auto te : r)
    cout<<te.first << " "<<te.second ;
    cout<<"\n";
    if(r.empty())
        cout<<"Map is empty";
        else 
        cout<<"Map is not empty ";
}