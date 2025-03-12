#include <stdio.h>
#include "developer.h"
#include "developer_group.h"

int main() {
    int a=1;
    printf("===========================\n");
    while(a!=4){
    printf("Choose your Action\nList Developers        [1]\nPrint Group Logo       [2]\nPrint Group            [3]\nExit                   [4]\n===========================\n");
    scanf("%i", &a);
    printf("===========================\n");
    if (a==1){
        print_developer();
        
    }
    else if (a==2){
        print_developer_group();
        
    }
    else if (a==3){
        print_developer();
        print_developer_group();
        
    }
   
} 
printf("Program exited\n===========================\n");
return 0;
}
