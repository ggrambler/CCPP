#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;


#define str "au"



class Solution{

public:
    int lengthOfSubstring( string s){
        int n = s.length();
        int maxx = 0;
        int right =0, left =0;
        unordered_set <char> AlSet;
        for( right =0; right<n; right++){
            if (!(AlSet.count(s[right]))){ // count of the char is 0 in set
                AlSet.insert(s[right]);
                maxx = max(maxx, right - left +1);
            }else {
                while(AlSet.count(s[right])){
                    left++;
                    AlSet.erase(s[left]);
                }
                AlSet.insert(s[right]);
            }
        }
        return maxx;
    }
};

int main(){

    vector <string> strs = {"Auu", "ffff", "Divyansh", "kooki", "supper"};
    Solution A;
    // int n = A.lengthOfSubstring(str);
    // cout<<n<<str<<endl;

    for(string x: strs){
        int n = A.lengthOfSubstring(x);
        cout<<x<<": "<<n<<endl;
    }

}