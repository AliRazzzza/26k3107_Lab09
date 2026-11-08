#include <stdio.h>
int main(){
   int balance[5] = {15000, 25000, 18000, 32000, 12000};
   int *ptr = balance;
   int cus, amt;
   printf("Select customer number: ");
   scanf("%d", &cus);
   
   if (cus < 0 || cus > 4) {
      printf("Invalid customer number\n");
      return 1;
   }
   printf("The balance for customer %d is: %d\n", cus , *(ptr + cus));
   printf("The address for customer %d is: %x\n", cus , (ptr + cus));
   
   printf("Enter new balance for customer %d: ", cus);
    scanf("%d", &amt);
   *(ptr + cus) = amt;
   
   printf("The new balance for customer %d is: %d\n", cus , *(ptr + cus));
   for(int i = 0; i < 5; i++){
      printf("The balance for customer %d is: %d\n", i , *(ptr + i));

   }
   
   return 0;

}
