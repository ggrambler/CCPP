#include <iostream>
#include <vector>
#include <string>
using namespace std;

void outs(vector <int> vec, int n){
    cout<<"[";
    for(int i=0;i<n-1;i++){
        cout<<vec[i]<<",";
    }
    cout<<vec[n-1]<<"]";
}


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(n==0 && m==0){
            cout<<"[0]"<<endl;

        }
        else if(n==0 && m!=0){
            outs(nums1,m);
        }
        else if(n!=0 && m==0){
            outs(nums2,n);
        }
        else if(n!=0 && m!=0){

            vector <int> res(n+m);
            int a =0;
            int b =0;
            for(int i=0;i<n+m;i++){
                
               
                cout<<i<<a<<b<<endl;
                if((a != m) && (b != n)){
                if(nums1[a]<=nums2[b]){
                    res[i]=nums1[a];
                    a++;}
                else{res [i]=nums2[b];
                    b++;}
                }
                else if (a == m){
                    res[i]=nums2[b];
                    b++;
                }
                else if( b==n ){
                    res[i] = nums1[a];
                    a++;
                }
                else cout<<"Finals"<<endl;
            }

            outs(res,n+m);
        }
        else cout<<"ERROR"<<endl;
    }
        
};



int main(){
    
    Solution A;
    vector <int> vec1 = {1,2,3,0,0,0};
    vector <int> vec2 = {2,3,4,5};
    A.merge(vec1,3,vec2,4);
    
    
    
    return 0;}