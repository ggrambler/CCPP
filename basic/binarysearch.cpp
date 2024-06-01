#include <iostream>
#include <vector>
using namespace std;


void binsearch(vector <int> vec , int n){
    int low = 0;
    int high = vec.size() -1 ;
    while(low<high){
        
        int mid = (low + high)/2;
        cout<<mid<<endl;
        if (vec[mid] == n) {
            cout<< "Found at :"<<mid<<" !!"<<endl;
            break;
        }
        if (vec[mid] > n){
            high = mid -1;
        }
        if (vec[mid]< n) {
            low= mid +1;
        }
    }
    if(!(low<high))cout<<"NOT FOUND !!"<<endl;
}

int main(){
    
    vector <int> vec1;
    vec1= {1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter search value: "<<endl;
    int n;
    cin>>n;
    cout<<n<<endl;
    binsearch(vec1 , n);
    return 0;}