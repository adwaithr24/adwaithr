#include<stdio.h>
void main()
{
int a[7],flag=0,i,element,t;
t++;
printf("Enter the elements");
t++;
for(i=0;i<5;i++) 
{
t++; 
scanf("%d",&a[i]);
t++;
}
t++;
printf("Enter the element to be searched");
t++;
scanf("%d",&element);
t++;
t++;
for(i=0;i<5;i++)
{
t++;
if(a[i]==element)
{
t++;
t++;
 printf("The element found at %d\n",i+1);
 flag = 1;
 t++;
}
}
t++;
if(flag == 0)
{
printf("Element not found\n");
t++;
}
else
{
//printf("Element found");
t++;
}
printf("space complexity is %d",(4*4)+(i*4));
printf("Time complexity is %d",t);
}
