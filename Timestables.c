#include <stdio.h>
int times(int chicken);

int main(){
int n;
for (n = 1; n <= 12; n++) {
printf("The times table for %d is", n);
printf("%d\n", times(n));}
}

int times(int chicken){
int i, table=1;
for (i = 1; i <= 12; i++) {
table = chicken * i;
printf("%d times %d is %d\n", chicken, i, table); }
return 0;
}
