/* void *memcpy(void *str1, const void *str2, size_t n) */

#include <stdio.h>
#include <string.h>

int main() {
char bobby[50];
char joe[50];

printf("Please insert your firstname\n");
gets(bobby);
printf("Please insert your second name\n");
gets(joe);

char *fullname = malloc(strlen(bobby) + strlen(joe) + 1);
memcpy(fullname, &bobby, strlen(bobby) +1);
memcpy(fullname + strlen(bobby), &joe, strlen(joe)+1);

printf(fullname);
  return 0;
}
