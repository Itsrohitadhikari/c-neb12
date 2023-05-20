//we will end function after this program

#include<stdio.h>

//this program will make calculator using function and switcj

int sum(int, int);

int dif(int, int);

int mul(int, int);

int div(int, int);

void main()

{

int a,b;

char c;

printf("Enter the Operand as +, -, *, /: ");

scanf("%c",&c);

printf("Enter Digit In first variable: ");

scanf("%d",&a);

printf("Enter Digit In second variable: ");

scanf("%d",&b);

switch(c)

{

case '+':

printf("%d + %d = %d",a,b,sum(a,b));

break;

case '-':

printf("%d - %d = %d",a,b,dif(a,b));

break;

case '*':

printf("%d * %d = %d",a,b,mul(a,b));

break;

case '/':

printf("%d / %d = %d",a,b,div(a,b));

break;

default:

printf("Sorry! The Entered Option Is Not Available As of now.. ");

}

}

int sum(int a, int b)

{

return(a+b);

}

int dif(int a, int b)

{

return(a-b);

}

int mul(int a, int b)

{

return(a*b);

}

int div(int a, int b)

{

return(a/b);

}
