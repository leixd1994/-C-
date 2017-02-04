#include <stdio.h>
void main()
{
int max(int b[][4]);
int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
printf("%d",max(a));


}

int max(int b[][4])
{
int i,j,m=0;
for (i=0;i<3;i++)
for (j=0;j<4;j++)
if (m<b[i][j])
m=b[i][j];
return m;
}