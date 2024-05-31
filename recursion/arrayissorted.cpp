#include <iostream>
using namespace std;

void AisS(int a[], int n){
    if(n==1) cout<<"Yes!!"<<endl;
    else if(a[n-1]>=a[n-2]){
        // cout<<a[n-1]<<a[n-2]<<endl;
        AisS(a,n-1);
        return;
    }
    
    else cout<<"No!!"<<endl;
    return;

}

int main(){
    int arr[] = {1,2,2,2,3,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    AisS(arr,n);
    return 0;
}