#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector <int> fibo;
        fibo.push_back(0);
        fibo.push_back(1);
        for(int i=1;i<n;i++) fibo.push_back( fibo[i-1] + fibo[i]);
        return fibo[n-1] + fibo[n];
    }
};


int main(){
    Solution A;
    int n = A.climbStairs(5);
    cout<<n;
}