#include <vector>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {

        priority_queue<int, vector<int> , greater<int>> minHeap;
        for(int x: nums) minHeap.push(x);
        while(!minHeap.empty()){
            cout<<minHeap.top();
            minHeap.pop();
        }
    
        return 0;
    }
};

int main(){

    vector <int> nn = {2,5,3,2,1,5,7};
    Solution A;
    int a = A.maximumProduct(nn,1);

}