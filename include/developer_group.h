#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#include "developer.h"

#define MAX_DEVELOPERS 10

typedef struct {
    developer developers[MAX_DEVELOPERS];
    int developer_count;
    char group_logo[256];
} developer_group;

void init_developer_group();
void print_developer_group();

#endif // DEVELOPER_GROUP_H