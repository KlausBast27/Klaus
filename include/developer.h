#ifndef DEVELOPER_H                              // Include guard to prevent multiple inclusions of this header file
#define DEVELOPER_H

typedef struct {                                 // Define a structure to represent a developer
    char name[15];                               // Field to store the developer's name (max 14 characters + null terminator)
    char alias[15];                              // Field to store the developer's alias (max 14 characters + null terminator)
} developer;

void init_developer(developer *dev, const char *name, const char *alias); // Function to initialize a developer
void print_developer(const developer *dev);                               // Function to print a developer's details
void list_developers();                                                   // Function to list all developers

#endif                                           // End of include guard