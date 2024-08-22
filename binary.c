#include<stdio.h>
void main()
{
int i,n,x,flag,time;
printf("Enter the no of elements");
scanf("%d",&n);
time++;
int  a[n],mid,left=0,right;
time++;
time++;
printf("Enter the elements");
time++;
for(i=0;i<n;i++)
{
time++;
scanf("%d",&a[i]);
time++;
}
printf("Enter the elements to be searched");
time++;
scanf("%d",&x);
time++;
while(left<=right)
{
time++;
mid = (left+right)/2;
time++;
if(x==a[mid])
{
flag = 1;
time++;
break;
}
else if(x>a[mid])
{
right = mid-1;
time++;
}
}
if(flag ==0)
{
time++;
printf("element not found");
time++;
}
else if (flag==1)
{
printf("element found at location %d in",mid+1);
time++;
printf("space complexit = %d\n time complex=%d\n",32+(4*n),time);
}
}
