#include <stdio.h>

int main() {
   int a = 0;
   int b = 0;
   printf("enter 2 numbers: ");
   scanf("%d %d", &a, &b);
   printf("enter operation: ");
   char oper;
   scanf(" %c", &oper);
   int result = 0;
   switch(oper) {
   case '-':
         result = a-b;
	 break;
   case '+':
	 result = a+b;
	 break;
   }
   printf("result: %d\n", result);
   return 0;
}
