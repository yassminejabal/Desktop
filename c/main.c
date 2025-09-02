#include <stdio.h>
# include <math.h>
int main(){

    float rayon = 10;
    const double p = 3.1415926535897;
    float volume;
    printf("entre la valeur du rayon : ");
    scanf("%f",&rayon);
    volume = (4.0f/3.0f)*p*pow(rayon,3);
    printf("la valeur du volume et : %f",volume);
}