#ifndef DEVELOPER_H
#define DEVELOPER_H

typedef struct {
    char name[15];
    char alias[15];
} developer;

void init_developer(developer *dev, const char *name, const char *alias);
void print_developer(const developer *dev);
void list_developers();

#endif // DEVELOPER_H