#include "developer_group.h"                   // Include the header file for the 'developer_group' structure
#include <stdio.h>                             // Include standard I/O library for printing
#include <string.h>                            // Include string library for string manipulation

static developer_group group;                  // Declare a static instance of the 'developer_group' structure

void init_developer_group() {
    strncpy(group.group_logo,                  // Copy the ASCII art logo into the group_logo field
        "    :::    :::     \n"
        " :::::::::::::::::   \n"
        "   :::::     :::::  \n"
        "   :::::    .::::    \n"
        "   :::::...:::::::   \n"
        "   :::::      :::::  \n"
        "  ::::::     .:::::  \n"
        "::::::::::::::::::  \n"
        "    :::     :::     \n", 
        sizeof(group.group_logo) - 1);         // Limit the copy to avoid buffer overflow
    group.group_logo[sizeof(group.group_logo) - 1] = '\0'; // Ensure the string is null-terminated
}

void print_developer_group() {
    init_developer_group();                    // Initialize the developer group (set the logo)
    printf("%s", group.group_logo);            // Print the group logo
}