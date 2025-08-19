#include<stdio.h>
int main(){
    int arr[5]={3,1,4,8,5};
    int max = arr[0];
    for(int i=1; i<5; i++)
    if(arr[i]>max){
        max= arr[i];
    }
    printf("the maximum element is :%d\n",max);
    return 0;

}