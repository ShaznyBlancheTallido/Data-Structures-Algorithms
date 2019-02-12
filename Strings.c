#include <stdio.h>
#include <string.h>
int main() {
char firstname[] = "Mike";
char lastname[] = "Child";
char fullname[50];
char formalname[50];

printf("%s\n", firstname);
printf("%s\n", lastname);

char* fullname = malloc(strlen(firstname) + strlen(lastname) + 1);
memcpy(fullname, &firstname, strlen(firstname) + 1);
memcpy(fullname + strlen(firstname), &lastname, strlen(lastname) + 1);
printf(fullname);

return 0;
}
