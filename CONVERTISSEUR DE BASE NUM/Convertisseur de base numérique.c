#include <stdio.h>

// Fonction pour afficher la representation binaire d'un nombre
void afficher_binaire(unsigned int n) {
    if (n > 1) {
        afficher_binaire(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    unsigned int nombre;
    int continuer = 1;

    while (continuer == 1) {
        void("\n=========================================\n");
        printf("   PROJET 2 : CONVERTISSEUR DE BASES     \n");
        void("=========================================\n");
        printf("Entrez un nombre entier positif : ");
        scanf("%u", &nombre);

        printf("\nResultats pour le nombre %u :\n", nombre);
        void("-----------------------------------------\n");

        // Affichage binaire
        printf("- Binaire      : ");
        if (nombre == 0) {
            printf("0");
        } else {
            afficher_binaire(nombre);
        }
        printf("\n");

        // Affichage octal, decimal et hexadecimal grace aux formats natifs de C
        printf("- Octal        : %o\n", nombre);
        printf("- Decimal      : %u\n", nombre);
        printf("- Hexadecimal  : %X\n", nombre);

        void("-----------------------------------------\n");
        printf("Voulez-vous convertir un autre nombre ? (1 pour oui, 0 pour quitter) : ");
        scanf("%d", &continuer);
    }

    printf("\nFin du programme. Au revoir !\n");

    return 0;
}
