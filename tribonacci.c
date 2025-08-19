#include<stdio.h>
int main(){
    int i,n,d, a=0,b=1,c=1;
    printf("enter a number:");
    scanf("%d" ,&n);
    for(i=3;i<=n;i++){
        printf("%d ",a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;

    }
return 0;
}