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

class RandomizedSet {
public:
    unordered_map<int,int> hash;
    vector<int> values;
    int lastIndex=0;
    RandomizedSet() {
    }
    bool insert(int val) {
        if(hash.find(val)==hash.end()){
            if(values.size()==lastIndex)
                values.push_back(val);
            else
                values[lastIndex]=val;
            
            hash[val]=lastIndex;
            lastIndex++;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(hash.find(val)!=hash.end()){
            int index=hash[val];
            swap(values[index],values[lastIndex-1]);
            hash[values[index]]=index;
            hash.erase(val);
            --lastIndex;
            return true;
        }
        return false; 
    }
    
    int getRandom() {
        int rIndex=rand();
        rIndex=rIndex%(lastIndex);
        return values[rIndex];
    }
};



int main(){
    
}