#include <stdio.h>
#include "is_samogloska.h"
#include "is_spolgloska.h"

int main() {
    char lit;
    printf("Podaj litere:\n");
    scanf("%c", &lit);

    if(is_spolgloska(lit))
        printf("Spolgloska");
    else if(is_samogloska(lit))
        printf("Samogloska");
}




