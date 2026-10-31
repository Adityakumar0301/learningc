#include<stdio.h>
int dec(int x){
    if (x == 0)
        return 1;
    
    printf("%d ",x);
    dec(x-1);
}
int main(){
    
    int n;
    printf("enter the vlaue of n= ");
    scanf("%d",&n);
    int decending = dec(n);



    return 0;
}