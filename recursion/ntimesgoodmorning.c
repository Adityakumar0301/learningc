#include<stdio.h>
void rep(int x){
    if (x == 0)
        return;
    printf("good morning\n");
    rep(x-1);
    return ;
}
int main(){

    int n;
    
    printf("enter the number of time u want to print : \n");
    scanf("%d",&n);
    rep(n);
    return 0;
}