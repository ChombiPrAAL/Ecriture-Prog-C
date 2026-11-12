#include "fonctions.h"

void main()
{
    setlocale(LC_ALL, "fr_FR.UTF-8");

    printf("Ce programme a pour but de vous montrez certaines choses de la programmation en C. \nTout le explications sont dans le fichier créer par ce programme.");

    creationFichier();

    printf("\nAppuyez sur une touche pour quitter...");
    getch();
}