#include <stdio.h>
int fact(int x){

    int factorial = 1;
    for (int i=1;i<=x;i++){
    factorial = factorial *i;
    }
    return factorial;

}
int main(){

    int n,r;
    printf("enter the value of n and r ");
    scanf("%d %d",&n,&r);

    int factorial = fact(n)/(fact(r)*fact(n-r));
    printf("factorial is %d",factorial);
    return 0;


}