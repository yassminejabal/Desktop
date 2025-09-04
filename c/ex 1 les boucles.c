#include <stdio.h>
int main() {
    int GS1,Ig,Nd,Cl,Cc;
    do{
        printf("entrez l'isbn : ");
    scanf("%d-%d-%d-%d-%d",&GS1,&Ig,&Cl,&Nd,&Cc);
    }while( GS1!=978 && GS1!=979);
    printf("Préfixe GS1 :%d\n",GS1);
    printf("Identifiant de groupe :%d\n",Ig);
    printf("Code de l'éditeur :%d\n",Cl);
    printf("Numéro d'article :%d\n",Nd);
    printf("Chiffre de contrôle :%d",Cc);
    return 0;