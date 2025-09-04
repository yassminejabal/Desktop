#include <stdio.h>
int main (){
    int a,b,n;
    printf("entre la valeur de n : ");
    scanf("%d",&n);
    a=n/10;
    b=n%10;
    printf("%d%d",b,a);
}