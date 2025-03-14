#include "developer_group.h"
#include <stdio.h>
#include <string.h>

static developer_group group;

void init_developer_group() {
    strncpy(group.group_logo, 
        "    :::    :::     \n"
        " :::::::::::::::::   \n"
        "   :::::     :::::  \n"
        "   :::::    .::::    \n"
        "   :::::...:::::::   \n"
        "   :::::      :::::  \n"
        "  ::::::     .:::::  \n"
        "::::::::::::::::::  \n"
        "    :::     :::     \n"
        "===========================\n", 
        sizeof(group.group_logo) - 1);
    group.group_logo[sizeof(group.group_logo) - 1] = '\0';
}

void print_developer_group() {
    init_developer_group();
    printf("%s", group.group_logo);
}