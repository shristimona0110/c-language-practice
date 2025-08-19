#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");//negative exit the program
    label:
    scanf("%d",&num);
    if( num <0) {
        goto end;
    }
    
    printf("you entered:%d\n",num);
    goto label;
    end:

    printf("exciting the program.\n");
    return 0;

}