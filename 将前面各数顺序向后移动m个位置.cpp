#include <stdio.h>
void main()
{
	void move(int array[20],int n,int m);
int number[20],n,m,i;
scanf("%d",&n);
printf("ok");
for (i=0;i<n;i++)
scanf("%d",&number[i]);
printf("how many place you want move ?");
scanf("%d",&m);
move (number,n,m);
printf("now is");
for (i=0;i<n;i++)
printf("%d\t",number[i]);

}
void move(int array[20],int n,int m)
{
int *p,array_end;
array_end=*(array+n-1);
for (p=array+n-1;p>array;p--)
*p=*(p-1);
*array=array_end;
m--;
if (m>0 ) move(array,n,m);

}