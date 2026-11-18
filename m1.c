#include<stdio.h>
int main(){

    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    //find the repeated number 

    //m1--

    for (int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]==a[j]){
                printf("the number is %d",a[i]);
            }
        }

    }


return 0;
}