#include <stdio.h>

int fact(int n){
    if(n)
        return (n*fact(n-1));
    return 1;
}


int main(){
    
    int a = fact(5);
    printf("%d",a);


    return 0;
}