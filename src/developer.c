#include "developer.h"
#include <stdio.h>
#include <string.h>

void init_developer(developer *dev, const char *name, const char *alias) {
    strncpy(dev->name, name, sizeof(dev->name) - 1);
    dev->name[sizeof(dev->name) - 1] = '\0';
    strncpy(dev->alias, alias, sizeof(dev->alias) - 1);
    dev->alias[sizeof(dev->alias) - 1] = '\0';
}

void print_developer(const developer *dev) {
    printf("%s, Alias: %s\n", dev->name, dev->alias);
}

void list_developers() {
    developer dev1, dev2;
    init_developer(&dev1, "Klaus Bast", "KlausBast27");
    init_developer(&dev2, "Kai Retig", "Kailrt");

    print_developer(&dev1);
    print_developer(&dev2);
    printf("===========================\n");
}