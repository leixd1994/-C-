#include <stdio.h>
#include <string.h>

char a[]="this is a key";
char b[10];
char d[100];
char *p=d;
void main()
{void f1();
	void f();
FILE *fp;
fp=fopen("e:\\text.jpg","ab+");



printf("%d",fwrite(a,sizeof(a),1,fp));

f1();
f();
printf("%s",d);
}
void f()
{
	FILE *fp;
fp=fopen("e:\\text.jpg","ab+");
rewind(fp);

loop:while (b[0]!='t')
{
	fread(b,1,1,fp);
}
fseek(fp,-1,1);
fread(b,sizeof(a),1,fp);
if (strcmp(b,"this is a key")==0)
{
	printf("ok");
while (!feof(fp))
{
fread(p,1,1,fp);

}
}
else 
{fseek(fp,1,1);
goto loop;}

}






void f1()
{
	FILE *fp;
fp=fopen("e:\\text.jpg","ab+");
FILE *fp2;
fp2=fopen("e:\\s.txt","r");
 while (!feof(fp2))
{
char c[10];
fread(c,1,1,fp2);
fwrite(c,1,1,fp);
};

}
void fshow()
{

}