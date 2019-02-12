#include <stdio.h>
#include <string.h>

int main() {
const char* flabby[20], anny[20];

printf("Insert your first and last name\n");
scanf("%s %s\n", &flabby, &anny);

printf("%s\n", flabby);
printf("%s\n", anny);

//Here the declaration and the definition of the pointer
//is together with malloc
char* fatjo = malloc(strlen(flabby) + strlen(anny) + 1);
memcpy(fatjo, &flabby, strlen(flabby)+1);
memcpy(fatjo + strlen(flabby), &anny, strlen(anny) + 1);

printf(fatjo);
printf("\n Address of Flabby variable: %u\n", &flabby);
printf("\n Flabbies address in HEX: %x\n", &flabby);

return 0;
}
