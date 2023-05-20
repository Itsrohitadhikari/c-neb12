//factorial using recursion

#include<stdio.h>

int facto(int);

void main()

{

int i;

printf("Enter A Number: ");

scanf("%d",&i);

int f = facto(i);

printf("The Factorial = %d",f);

}

int facto(int i)

{

if(i == 0)

{

return 1;

}

else if(i < 0)

{

printf("Factorial Of Negative Number Is not possible!!!!");

return 0;

}

return(i*facto(i-1));

}
