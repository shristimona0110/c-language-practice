#include<stdio.h>
int main (){
    int arr[5]= {1,2,3,4,5};
    int temp;
    //reversing number code
    for(int i= 0;i<6; i++){
        temp = arr[i];
        arr[i]=arr[4-i];

    }
    for (int i=0;i<5; i++){
       printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}