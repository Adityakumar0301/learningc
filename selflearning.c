#include<stdio.h>
int main(){
    int a =  13;
    int *x = &a;
   

    printf("%d\n",&a);
    printf("%d\n",a);
    printf("%*p\n",x);
    printf("%p\n",&a);

    return 0;
}