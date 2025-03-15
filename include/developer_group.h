#ifndef DEVELOPER_GROUP_H                        // Include guard to prevent multiple inclusions of this header file
#define DEVELOPER_GROUP_H

#include "developer.h"                          // Include the developer header for the 'developer' structure

#define MAX_DEVELOPERS 10                       // Define the maximum number of developers in a group

typedef struct {                                // Define a structure to represent a developer group
    developer developers[MAX_DEVELOPERS];       // Array to store up to MAX_DEVELOPERS developers
    int developer_count;                        // Field to store the current number of developers in the group
    char group_logo[256];                       // Field to store the group's logo as a string
} developer_group;

void init_developer_group();                    // Function to initialize a developer group
void print_developer_group();                   // Function to print the developer group's logo

#endif                                          // End of include guard