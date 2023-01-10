#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    vector<int> v= {323,3,35,4,2,14,2,42,4,2};
    list<int> l;
    for(auto i:v)
    {
        l.push_front(i);
    }
    for(auto i:l)
    {
        cout<<i<<endl;
    }


    return 0;
}