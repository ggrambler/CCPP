#include <iostream>
using namespace std;

#define K 3

void bin(int n, int A[]){
    if(n==0){
        for(int i=0;i<K;i++)cout<<A[i];
        cout<<endl;
    }
    else{
        A[n-1]=0;
        bin(n-1,A);
        A[n-1]=1;
        bin(n-1,A);
        // A[n-1]=2;
        // bin(n-1,A);
    }
}
int main(){
    int A[K];
    bin(K,A);
    return 0;
}