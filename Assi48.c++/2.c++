#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m1;
    m1.insert({1,2});
    m1.insert({2,3});
    m1.insert({3,4});
    multimap<int,int>::iterator i;
    for(auto i : m1)
    {
        cout<<i.first <<" "<<i.second<<endl;
    }
    cout<<endl;
    multimap<int,int> m2;
    m2.insert(pair<int,int>(1,20));
    m2.insert(pair<int,int>(2,309));
    m2.insert(pair<int,int>(4,10));
    m2.insert(pair<int,int>(5,90));
    for(i = m2.begin(); i!= m2.end(); i++)
    {
        cout<<i->first<<" "<<i->second <<"\n";
    }
   
}