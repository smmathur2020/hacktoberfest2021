#include<stdio.h>
#include<conio.h>

void main(void)   //Execution of every program starts from main() function.
{
   int fact, i, n;
   fact = 1;
   printf("Enter the number\t");
   scanf("%d" , &n);
   for(i = 1; i <= n; i++)
   {
       fact = fact*i;
   }
   printf("Factorial of %d is %d", n , fact);
   getch();
}
