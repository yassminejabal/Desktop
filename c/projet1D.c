#include <stdio.h>
#define MAX_NOTES 100 

float notes[MAX_NOTES];
int nombre_element = 0;

void MoyenneGenerale() {
    if (nombre_element == 0) {
        printf("Aucune note saisie.\n");
        return;
    }

    float somme = 0;
    float max = notes[0];
    float min = notes[0];

    for (int i = 0; i < nombre_element; i++) {
        somme = somme + notes[i];

        if (notes[i] > max) max = notes[i];
        if (notes[i] < min) min = notes[i];
    }

    float MG = somme / nombre_element;

    printf("Moyenne Générale : %.2f\n", MG);
    printf(" Note Max : %.2f\n", max);
    printf(" Note Min : %.2f\n", min);
}

void sisirlesnote() {
    int nombre_note;
    float note;

    printf("Saisir le nombre des notes : ");
    scanf("%d", &nombre_note);

    if (nombre_note < 0) nombre_note = 0;
    if (nombre_note + nombre_element > MAX_NOTES) {
        nombre_note = MAX_NOTES - nombre_element;
        printf("erreur. Saisir seulement %d notes.\n", nombre_note);
        return;
    }

    for (int i = 0; i < nombre_note; i++) { 
        printf("Entrer la note %d : ", i + 1);
        scanf("%f", &note);

        if (note < 0 || note > 20) {
            printf("erreur: note invalide.\n");
            i--;
        } else {
            notes[nombre_element++] = note;
        }
    }
}

void listdesnotes() {
    if (nombre_element == 0) {
        printf("aucune note saisie.\n");
        return;
    }

    printf("Liste des notes :\n");
    for (int i = 0; i < nombre_element; i++) {
        printf("Note %d = %.2f\n", i + 1, notes[i]);
    }
}

void selectionnerNumeroDuMenu(int nombrechoisi) {
    switch (nombrechoisi) {
        case 1:
            sisirlesnote();
            break;
        case 2:
            listdesnotes();
            break;
        case 3:
            MoyenneGenerale();
            break;
        default:
            printf("Choix invalide.\n");
    }
}

int main() {
    int nombreChoisi = -1;

    while (nombreChoisi != 0) {
        printf("\n     Menu (console)     \n");
        printf("1) Saisir N notes\n");
        printf("2) Afficher les notes\n");
        printf("3) Statistiques (moyenne, max, min)\n");
        printf("0) Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &nombreChoisi);

        if (nombreChoisi != 0) {
            selectionnerNumeroDuMenu(nombreChoisi);
        } else {
            printf(" Fin du programme.\n");
        }
    }

    return 0;
}
