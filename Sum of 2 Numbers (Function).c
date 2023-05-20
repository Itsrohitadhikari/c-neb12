#include<stdio.h>
int sum(int,int);
//this is the function where we calculate sum of 2 Numbers 
void main()
{
int a,b,s;
printf("Enter First Digit: ");
scanf("%d",&a);
printf("Enter Second Digit: ");
scanf("%d",&b);
//now we look into the matter how to Calculate
//we know we need to add both variable but
//now using the function
//means we need to call function
//let's see
//we have two methods to do
//one is commented
/*
s = sum(a,b);
//now print the value of s
*/
//another method 
printf("The Sum of entered number: %d",sum(a,b));
//the code below this line you add will be 
//run after getting data from function 
}
int sum(int a,int b)
{
return(a+b);
//haha this is the shortest method 
//long one is commented
/*
int add;
add = a + b;
return(add);
*/


}
