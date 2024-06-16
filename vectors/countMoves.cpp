// This is bad code .
// The entire question can be solved by sorting the 2 vectors and
// then finding difference of each ith element and adding them up 
// diff is absolute 
// moves += abs(student[i] - seats[i])
// return moves

#include <vector>
#include <iostream>
#include <map>
#include <cmath>

using namespace std;


class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students){
        
        map<int,int> m1 ;
        map<int,int> m2 ;
        for(int x: seats) m1[x]++;
        for(int x: students) m2[x]++;

        for(auto it = m1.begin();it != m1.end();it++){
            if(m2.find(it->first) != m2.end()){
                auto a = m2.find(it->first);
                a->second --;
                it->second --;
                //reduce count of common elements
            }
        }

        vector <int> aa;
        vector <int> bb;

        for(auto it = m1.begin();it != m1.end();it++)
        if(it->second > 0)
        for(int k = 0;k<it->second;k++)
        aa.push_back(it->first);
    
        for(auto it = m2.begin();it != m2.end();it++)
        if(it->second > 0) 
        for(int k = 0;k<it->second;k++)
        bb.push_back(it->first);

        int move = 0;// counter for total moves
        for(int i=0;i<aa.size();i++)move += abs(aa[i]-bb[i]);

        return move;

    }
};