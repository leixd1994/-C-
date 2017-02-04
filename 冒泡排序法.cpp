#include <stdio.h>



void main()
{
	int a[]={9,8,5,4,2,0};
    int i,j,t;
	for (j=0;j<6;j++)
	{for (i=0;i<6-j;i++)
	{
	if (a[i]>a[i+1])
	{t=a[i];a[i]=a[i+1];a[i+1]=t;}
	}
	}
	int k;
	for (k=0;k<6;k++)
		printf("%5d",a[k]);
}