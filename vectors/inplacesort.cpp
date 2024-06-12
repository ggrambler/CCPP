#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        bool swapped ;
        for(int i=0;i<nums.size()-1;i++){
            swapped = false;
            for(int j=0;j<nums.size()-1-i;j++){
                if(nums[j]>nums[j+1]){
                    swapped = true;
                    nums[j] = nums[j] + nums[j+1];
                    nums[j+1] = nums[j] - nums[j+1];
                    nums[j] = nums[j] - nums[j+1];
                }
            }
            if(!swapped) break;
        }
            for(auto x:nums) cout<<x<<" ";  cout<<endl;
    }
};


int main(){
    vector <int> vec1 = {2,1,3,5,0,0,1,2,2,3};
    Solution A;
    A.sortColors(vec1);
}