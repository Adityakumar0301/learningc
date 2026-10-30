#include<stdio.h>
int main(){
    int arr[5]={5,-5,4,-4,3};
    int sum=0;
    
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("no whose pair does not exist is = %d",sum);
    
    return 0;
}
