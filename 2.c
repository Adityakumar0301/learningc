#include<stdio.h>
int main(){

    int arr[7]={1,2,3,4,5,6,7};
    int k,a[7];
    printf("enter the value of k");
    scanf("%d",&k);




    for (int i = 0; i < 7; i++)
    {
      a[7]=arr[k-i];
    }
    
    printf("%d",a[7]);


}