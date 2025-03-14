#include <stdio.h>
#include <stdlib.h>  // Für exit()
#include "developer.h"
#include "developer_group.h"

int main(void) {
    int userChoice = 1;  // Klare Benennung der Variablen
    printf("===========================\n");

    while (userChoice != 4) {
        printf("Choose your Action\n");
        printf("List Developers        [1]\n");
        printf("Print Group Logo       [2]\n");
        printf("Print Group            [3]\n");
        printf("Exit                   [4]\n");
        printf("===========================\n");

        if (scanf("%d", &userChoice) != 1) {
            while (getchar() != '\n');  // Eingabepuffer leeren
            userChoice = 0;  // Verhindert die Übernahme einer falschen Eingabe
            continue;  // Zurück zur Menüanzeige
        }

        printf("===========================\n");

        if (userChoice == 1) {
            print_developer();
        } else if (userChoice == 2) {
            print_developer_group();
        } else if (userChoice == 3) {
            print_developer();
            print_developer_group();
        } else if (userChoice == 4) {
            printf("Exiting program...\n");
            printf("===========================\n");
            exit(0);  // Beendet das Programm sofort und gibt den Speicher frei
        }
    }

    return 0;  // Falls exit() nicht aufgerufen wurde
}
