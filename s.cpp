#include <stdio.h>
#include <string.h> 
int main()
{
	int i=0;
	char temp[30];
char a[1000][30];
while (strcmp(temp,"#")!=0)
{

gets(temp);
strcpy(a[i++],temp);

}
strcpy(a[i],"#");
i=0;
while (strcmp(a[i],"#")!=0)
{
printf("%d:\\%s\n",i+1,a[i++]);
}

}