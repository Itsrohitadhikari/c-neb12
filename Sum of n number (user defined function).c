#include<stdio.h>
int sum(int a[], int);
void main()
{

//int this we're adding all elements of matrix 
int a[100];
//TTR: a[] must be written while passing an array in the line where we initialize the function and below line where we start writing program for function
int i,n;
printf("Enter how many digits you want to add: ");
scanf("%d",&n);
//assuming you know looping in 11th 
for(i = 0; i<n; i++)
{
printf("Enter Value in %d term: ", i+1);
scanf("%d",&a[i]);
}
//Data Got
//let's call function
//many of you always initialized variabl at top of the program but we can initialize it everywhere let's see
int sm = sum(a,n);
//we don't write [] here
printf("\nSum Of All Elements: %d",sm);
}
int sum(int a[], int n)
{
int i;
int s = 0;
for(i = 0; i < n; i++)
{
s = s+a[i];
}
return(s);
}
