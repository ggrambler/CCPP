#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>

using namespace std;

class Solution{
    public:
        void relativeSortArray(vector <int> arr1, vector<int> arr2){
            vector <int> ans;

            map <int,int> mapp;
            for(int x: arr1) mapp[x]++;

            auto it = mapp.begin();
            while(it != mapp.end()) {
                // cout<<it->first<<it->second<<endl;
                it++;
            }

            for(int i =0;i<arr2.size();i++)
            {
                int ele = arr2[i];
                // cout<<ele<<endl;
                if(mapp.find(ele) != mapp.end()){
                    //pushback in ans for mapp[ele] times
                    while(mapp[ele]){
                        ans.push_back(ele);
                        mapp[ele]--;
                    }
                }
            }

            // for(int x: ans) cout<<x;

            auto itt = mapp.begin();
            while(itt != mapp.end()) {
                if(itt->second != 0 ) {
                    while(itt->second){
                        ans.push_back(itt->first);
                        itt->second --;
                    }
                }
                itt++;
            }
            cout<<"[";
            for(auto x: ans) cout<<x<<",";
            cout<<"]";
}
};

int main(){
        vector <int> arr1 = {1,2,3,3,4,1,2,5,6,2,1,12,2,44,40};
        vector <int> arr2 = {2,3,4,5,6,1};

        Solution A;
        A.relativeSortArray(arr1,arr2);
}
