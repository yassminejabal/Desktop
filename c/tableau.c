#include <stdio.h>
int main()
{
    float N [381];
    int i ;
    for(i=1;i<=3;i++){
    printf("entrer la note du l'ettudient %d est  :", i);
    scanf("%f",&N[i]);
    printf("la note du l'ettudient %d est %.2f :\n",i, N[i]);
    }
    return 0;
}