#include <stdio.h>
int j=1,n=0;
int a[14]={1,1,1,1,1,1,1,1,1,1,1,1,1,1};
void main()
{
	void in();
	void del();
	while (n<12)
	{
		in();
	del();
	
	}


}
void jchange()
{
if (j!=3)
j++;
else
j=1;
}
void del()
{
int i;
for (i=1;i<=13;i++)
if (a[i]==3)
{a[i]=0;
printf("%d\t",i);
n++;}
}


void in()
{
int i;
for (i=1;i<=13;i++)
{
if (a[i]!=0)
a[i]=j;
jchange();
}
}