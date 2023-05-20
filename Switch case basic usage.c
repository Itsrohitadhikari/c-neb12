#include<stdio.h>
void main()
{
int a,b;
printf("Enter a Number: ");
scanf("%d",&a);
switch(a)
{
case 1:
printf("\nSunday");
break;
case 2:
printf("\nMonday");
break;
case 3:
printf("\nTuesday");
break;
case 4:
printf("\nWednesday");
break;
case 5:
printf("\nThursday");
break;
case 6:
printf("\nFriday");
break;
case 7:
printf("\nSaturday");
break;
default:
printf("The Number You Entered Is not in the list!!!! ");
//this should be taught in class 11 so we're skipping general question of class 11 after this program and focus on 12th program problems
}
}
