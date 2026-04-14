#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    // die Variabln
    int auswahl;
    int zuzahlen;
    int gezahlt=0;
    int einwurf;
    int rueckgeld=0;
    // die Ausgabe für den Benutzer

    printf("\n-----------GetraenkeAutomat-----------------\n");
    //das menü
    while (auswahl!=5){


    printf("1. cola \t 120 Cent\n");
    printf("2. Fanta \t 130 Cent\n");
    printf("3. Sprite \t 140 Cent\n");
    printf("4. Wassser \t 150 Cent\n");
    printf("5. Beenden!\n");
    // die auswahl

    printf("\nIhre Auswahl:");
    scanf("%d", &auswahl);

    switch (auswahl)
        {
        case 1:
            printf("120 Cent\n");
            zuzahlen = 120;
            break;
        case 2:
            printf("130 Cent\n");
            zuzahlen = 130;
            break;
        case 3:
            printf("140 Cent\n");
            zuzahlen = 140;
            break;
        case 4:
            printf("150 Cent\n");
            zuzahlen = 150;
            break;
        case 5:
            printf("Vielen Dank\n");
            return 0;
            break;
        default:
            printf("\nFalsche Eingabe!!!\n");
        }
        // Bezahlen für ein Getränk
        do{
           printf("noch %d Cent fehlt!\n", zuzahlen-gezahlt);
           // das Geld einwerfen
           scanf("%d", &einwurf);
           gezahlt = gezahlt+einwurf;//gezahlt+=einwurf;
        }while(gezahlt<zuzahlen);

        //Rückgeld berechnen

        rueckgeld = gezahlt-zuzahlen;
        if (rueckgeld>0){

            printf("\nrueckgeld : %d Cent \n", rueckgeld);
            //To-D
            printf("\n%d - 2 euro", rueckgeld/200);
            // berechnen wir den Rest
            rueckgeld = rueckgeld%200;

            printf("\n%d - 1 euro", rueckgeld/100);
            // berechnen wir den Rest
            rueckgeld = rueckgeld%100;

            printf("\n%d - 50 Cent", rueckgeld/50);
            // berechnen wir den Rest
            rueckgeld = rueckgeld%50;

            printf("\n%d - 20 Cent", rueckgeld/20);
            rueckgeld = rueckgeld%20;

            printf("\n%d - 10 Cent", rueckgeld/10);
            rueckgeld = rueckgeld%10;



        }

            rueckgeld = 0;
            gezahlt = 0;
            zuzahlen = 0;


        printf("\nNehmen Sie ihr Getraenk!!! \ Vielen Dank\n");
        printf("\n-------------------------------------\n");



        }








    return 0;
}
