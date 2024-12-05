#include <stdio.h>

int main()
{
    int a,b;
    printf("please input a =");
    scanf("%d",&a);
    printf("please input b =");
    scanf("%d",&b);
    if(a > b){
        printf("a > b");
    }else if (a < b){
        printf("b > a");
    }else{
        printf("a == b");
    }
    return 0;
