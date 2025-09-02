#include <stdio.h>
# include <math.h>
int main()
{
    float montont,taxe,la_valeur_final;

    taxe=0.05;
    printf("entrer le montont: ");
    scanf("%f",&montont);
    la_valeur_final = (montont * taxe) + montont;
    printf("la valeur du montont avec le taxe est :%f",la_valeur_final);
    return 0;
}