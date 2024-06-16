#include <iostream>
#include <vector>

using namespace std;

int patchingArray(vector <int> arr, int n)
{   
    int pat = 0; //patches needed
    int jbr = 1; // just before reach
    int i = 0; // counter for arr elements
    while(jbr < n)
    {
        if(i<arr.size() && arr[i]<=jbr)
        {
            jbr += arr[i];
            i++;
        }
        else
        {
            jbr += jbr;
            cout<<jbr<<endl;
            pat++;
        }
    }
    return pat;
}
int main()
{
    vector <int> arr = {1,4,6};
    int n = 20;
    int ans = patchingArray(arr,n);
    cout<<ans;
    return 0;
}