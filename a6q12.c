/*question number 12*/

#include<stdio.h>
void main()
{
int i,j;
for(j=1;j<=6;j++)
{
for(i=1;i<=j;i++)
printf("%c",64+i);
for(i=1;i<=7-j;i++)
printf("%c",96+i);
printf("\n");

}

}