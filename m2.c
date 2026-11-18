#include<stdio.h>
int main(){
    int i,j;
    int a[9]={1,2,3,4,5,6,7,8,9};

    int target = 5;
    i=0;
    j=8;

    while(i<j){
        if (a[i]+a[j]==target){
                printf("no are %d and %d",a[i],a[j]);
            break;
        }
        else if(a[i]+a[j]>target){
            j--;
        }
        else if (a[i]+a[j]<target){
            i++;
        }
    }

return 0;
}