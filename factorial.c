#include<stdio.h>
int main(){
    int i,n,factorial =1;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        factorial *= i;
        
    }
    printf("factorial of : %d" ,factorial);
    return 0;
}
