#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int diff = 0;
        for(int i=0;i<s.length()-1;i++){
            int ch1 = static_cast<int> (s[i]);
            int ch2 = static_cast<int> (s[i+1]);
            diff += abs(ch1-ch2);

        }
        return diff;
    }
};


int main(){
    Solution A;

    int diff = A.scoreOfString("hello");
    cout<<diff;
    return 0;
}