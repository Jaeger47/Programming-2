//printing address of a variable
#include <stdio.h>
int main () {

   int  var1;
   char var2;

   printf("Address of var1 variable: %p\n", &var1  ); //prints address of var1 in pointer format
   printf("Address of var2 variable: %p\n", &var2  ); //prints address of var2 in pointer format
   printf("Address of var1 variable: %x\n", &var1  ); //prints address of var1 in hex format
   printf("Address of var2 variable: %d\n", &var2  ); //prints address of var2 in decimal format

   return 0;
}
