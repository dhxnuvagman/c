
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int num1, num2;
 float result=0;
 char ch;
 printf("Choose operation to perform(+,-,*,/,%): ");
 scanf("%c", &ch);

 printf("Enter first number: ");
 scanf("%d", &num1);
 printf("Enter second number: ");
 scanf("%d", &num2);

 switch(ch)
 {
 case '+':result=num1+num2;
 break;
 case '-':result=num1-num2;
 break;
 case '*': result=num1*num2;
 break;
 case '/':result=(float)num1/(float)num2;
 break;
 case '%': result=num1%num2;
 break;
 default: printf("Invalid operation.\n");
 exit(0);
 }
 printf("Result: %d %c %d = %f\n",num1,ch,num2,result); //display output on screen



}
