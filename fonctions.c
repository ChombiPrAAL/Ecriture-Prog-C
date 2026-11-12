#include "fonctions.h"

bool creationFichier()
{
    //Déclaration du fichier
    FILE *fichier;

    char nomFichier[TAILLE_NOM + 1];

    snprintf(nomFichier, TAILLE_NOM + 1, "Programmation en C.txt");

    //Ouverture du fichier
    fichier = fopen(nomFichier, "w");

    if (fichier == NULL)
    {
        printf("\nFichier n'a pas été bien créé.\n");
        return false;
    }

    //texte
    //intro
    fprintf(fichier, "      PROGRAMMATION EN C\n\n\n");

    fprintf(fichier, "Dans ce document va être divisé en 3 parties : \n- fonctions.h\n- fonctions.c\n- Prog.c\n\n\n");

    fprintf(fichier, "1 fonctions.h\n\nLe fichier fonctions.h est divisé en 3 parties :\n- Les include et define\n- Les énumérations et structures\n- Les déclarations des fonctions\n\n\n");

    //fonction.h
    fprintf(fichier, "1.1 Les include et define\n\n1.1.1 Les include\n\nLes include sont des bibliothèques de fonctions déjà faites mais on peut aussi faire nos propres fonctions.\n\n");
    fprintf(fichier, "1.1.2 Les define\n\nLes define permettent de définire une variable avec une certaine valeur. Les define peuvent être utilisé partout.\n\n\n");

    fprintf(fichier, "1.2 Les énumérations et structures\n\n1.2.1 Les énumérations\n\nLes énumérations sont un ensemble de define qui se suivent. On peut définire à quelle valeur onn commence en messtant = la valeur.\n\n");
    fprintf(fichier, "1.2.2 Les structures\n\nLes structures sont un ensemble de variables mise au même endroit.\n\n\n");


    fprintf(fichier,"1.3Les déclarations des fonctions\n\nLa déclartion d'une fonction à toujours 3 parties : \n- La valeur retournée\n- Le nom\n- Les variables\n\n");

    fprintf(fichier, "1.3.1 La valeur retournée\n\nPour savoir ce que retourne une fonction, il faut regarder la permière partie. On peut avoir :\n");
    fprintf(fichier, "- void => la fonctions de retourne rien\n- int => la fonction renvoit un entier\n- float => la fonction renvoit un nombre réel\n");
    fprintf(fichier,"- char => la fonction renvoit un caractère\n- char* => la fonction renvoit une chaine de caractère\n- bool => la fonction renvoit soit true soit false\n\n");
    
    fprintf(fichier,"1.3.2 Le nom\nC'est le nom de la fonction. Il vaut mieux que le nom de la fonction aille un rapport avec ce qu'elle fait\n\n");

    fprintf(fichier,"1.3.3 Les variables\nToutes les fonctions n'ont pas besoin de variables en plus.\nMais certaines ont besoins de variables qui viennent d'autres part dans la programme. Ces variables se déclarent comme des variables normales\n\n");
    fprintf(fichier,"Voici un exemple de fonction avec les 3 points : float cyclistes(float puissance);\n\n");

    //fonctions.c
    fprintf(fichier,"2 fonctions.c\n\nDans ce fichier, il y a tout les codes des fonctions qui sont déclarées dans fonctions.h.\n\n");

    //Prog.c
    fprintf(fichier,"3 Prog.c\nDans de dernier fichier, il y a la fonction main(). C'est la fonction principal dans le proggramme.");

    //fermeture du fichier
    fclose(fichier);

    printf("\nFichier bien créer.\n");
    return true;
}