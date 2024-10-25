#include <stdio.h>

void welcome() __attribute__((constructor));
void thanku() __attribute__ ((destructor));

void welcome(){
    printf("Good Morning to everyone!..\n");
}

void thanku(){
    printf("Thank you so much for being very very interactive....\n");
}

int main(){
    printf("This is main\n");
    return 0;
}