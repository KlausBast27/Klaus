#include <stdio.h>                               // Standard I/O library for input and output functions
#include <stdlib.h>                              // Standard library for functions like exit()
#include "developer.h"                           // Custom header file for developer-related functions
#include "developer_group.h"                     // Custom header file for developer group-related functions

int main(void) {
    int userChoice = 1;                          // Variable to store the user's menu choice, initialized to 1

    while (userChoice != 4) {                    // Main loop that continues until the user chooses to exit (option 4)

        printf("===========================\n"); // Display the menu options to the user
        printf("Choose your Action\n");
        printf("List Developers        [1]\n");
        printf("Print Group Logo       [2]\n");
        printf("Print Group            [3]\n");
        printf("Exit                   [4]\n");
        printf("===========================\n");

        if (scanf("%d", &userChoice) != 1) {     // If the input is invalid (not an integer), clear the input buffer
           
            while (getchar() != '\n');           // Discard invalid input
            userChoice = 0;                      // Reset userChoice to prevent invalid actions
            continue;                            // Restart the loop to display the menu again
        }

        printf("===========================\n");

        if (userChoice == 1) {
            list_developers();                   // Call the function to list developers
        } else if (userChoice == 2) {
            print_developer_group();             // Call the function to print the group logo
        } else if (userChoice == 3) {
            print_developer_group();             // Call the function to print the group logo
            list_developers();                   // Call the function to list developers
        } else if (userChoice == 4) {
            printf("Exiting program...\n");      // If the user chooses to exit, print a message and terminate the program
            printf("===========================\n"); 
            exit(0);                             // Exit the program immediately and free allocated resources
        }
    }

    return 0;                                    // Return 0 to indicate successful program termination (if exit() is not called)
}