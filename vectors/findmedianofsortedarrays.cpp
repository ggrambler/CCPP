
#include <math.h>
#include <vector>
#include <algorithm>

#include <iostream>
using namespace std;

// brute force
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        vector <int> num(nums1);
        num.insert(num.end(),nums2.begin(),nums2.end());
        sort(num.begin(),num.end());
        if(num.size()%2) return double(num[(n+m)/2]);
        else return ( double(num[(n+m)/2]) + double(num[(n+m-1)/2]))/2;
     
    }
};

//2 pointer slightly optimized
class Solution2 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        int m1 = 0;
        int m2 = 0;

        for (int count = 0; count <= (n + m) / 2; count++) {
            m2 = m1;
            if (i != n && j != m) {
                if (nums1[i] > nums2[j]) {
                    m1 = nums2[j++];
                } else {
                    m1 = nums1[i++];
                }
            } else if (i < n) {
                m1 = nums1[i++];
            } else {
                m1 = nums2[j++];
            }
        }
        if ((n + m) % 2 ) {
            return double(m1);
        } else {
            double ans = double (m1 + m2);
            return ans / 2.0;
        }
    }

};


int main(){

    Solution A;
    Solution2 B;
    vector <int> num1 , num2;
    num1= {1,2,3,4};
    num2 = {2,3,4,5,6};
    double a = A.findMedianSortedArrays(num1,num2);
    double b = B.findMedianSortedArrays(num1,num2);
    cout<<a<<endl<<b<<endl;

    return 0;
}