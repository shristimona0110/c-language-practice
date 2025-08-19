#include<stdio.h>
int main (){
    int marks [10];
    printf("enter a marks:%d");
    //scanf("%d ",&marks);
    for(int i=0;i<10; i++){
         if (marks[i]<35)
   printf("%d ", marks[i]);
   scanf("%d ",&marks[i]);
    }
    printf("element no. %d: %d\n" , i , marks[i]);


    return 0;
}