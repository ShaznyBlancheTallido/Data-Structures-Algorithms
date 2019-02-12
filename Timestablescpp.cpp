#include <iostream>
using namespace std;

int timestable(int a, int b);

 int main() {
int a,b;

printf("Please insert the times table number you want and how musch to see \n");
scanf("%d%d", &a, &b);

printf("%d", timestable(a, b));

   return 0;
 }

int timestable(int a, int b){
int i=0;

while (b>0) {
  printf("%d times %d is %d\n", a, i, a*i);
  i++;
  b--;
}

return 0;
}
