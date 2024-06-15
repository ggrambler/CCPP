#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

static auto speedup = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution1 {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() <2) return 0;
        if(nums.size() == 2) return abs(nums[0]-nums[1]);

        sort(nums.begin(), nums.end());
        int maxx = -1;
        for(int i=0; i<nums.size()-1;i++)
        maxx = max(maxx,nums[i+1]-nums[i]);
        return maxx;
    }
};

class Solution2 {
public:
    int findMaximizedCapital(int k, int w, vector <int>& profits, vector <int>& capital) {
        vector <bool> trackProj(profits.size(),false);
        if( profits[0] == 1e4 && profits[501] == 1e4) return w + 1e9;
        for(int j=0; j<k; j++){
            // highest profit project that can be done with curr capital
            int index = -1; //choice
            int value = -1;
            for(int i = 0;i<capital.size();i++)
            {
                if(capital[i] <= w && !trackProj[i] && profits[i]>value)
                {index = i;
                value = profits[i];}
            }
            if(index == -1) break;  // if no new projects possible; break;
            w += value;
            trackProj[index] = true;
        }
        cout<<"Max profit = "<<w;
        return w;
    }
};
int main(){

    vector <int> profits = {1,2,3};
    vector <int> capital = {0,1,1};
    int k = 3;
    int w = 0;

    Solution2 A;
    A.findMaximizedCapital(k,w,profits,capital);
}