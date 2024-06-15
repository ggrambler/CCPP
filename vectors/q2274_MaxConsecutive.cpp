#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ConsecutiveMax(int bottom, int top, vector <int> sp)
{
    int cur = 0;
    int maxx = 0;
    sort(sp.begin(), sp.end());
    maxx = max(maxx,sp[0] - bottom);
    for(int i=0;i<sp.size()-1;i++)
    {
        cur = sp[i+1] - sp[i] - 1;
        maxx = max(maxx,cur);
    }
    maxx = max(maxx, top - sp[sp.size()-1]);
    return maxx;
}

int main()
{
    vector <int> sp = {4,6};
    int re = ConsecutiveMax(2,9,sp);
    cout<<re<<endl;
}