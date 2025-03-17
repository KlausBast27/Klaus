#include "developer.h"                          // Include the header file for the 'developer' structure
#include <stdio.h>                              // Include standard I/O library for printing
#include <string.h>                             // Include string library for string manipulation

void init_developer(developer *dev, const char *name, const char *alias) {
    if (dev == NULL || name == NULL || alias == NULL) {    // Check if pointers are NULL    
        printf("Pointer is NULL\n");                        // Print an error message                        
        return;
    }
    strcpy(dev->name, name);       // Copy name to the developer's name field
    strcpy(dev->alias, alias);     // Copy alias to the developer's alias field
}

void print_developer(const developer *dev) {
    if (dev == NULL) {                                     // Check if pointer is NULL
        printf("Pointer dev is NULL\n");                   // Print an error message
        return;
    }
    printf("%s, Alias: %s\n", dev->name, dev->alias);      // Print the developer's name and alias
}

void list_developers() {
    developer dev1, dev2;                                  // Declare two developer structures
    init_developer(&dev1, "Klaus Bast", "KlausBast27");    // Initialize the first developer
    init_developer(&dev2, "Kai Retig ", "Kailrt");          // Initialize the second developer

    print_developer(&dev1);                                // Print the details of the first developer                                
    print_developer(&dev2);                                // Print the details of the second developer                                
}