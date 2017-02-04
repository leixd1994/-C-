#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct Stu)
struct Stu 
{
int num;struct Stu *next;
};
struct Stu *creat()
{
struct Stu *p1,*p2,*head;
int n=0;
p1=p2=(struct Stu *)malloc(LEN);
printf("input ");
scanf("%d",&p1->num);
head=NULL;
while (p1->num!=0)
{
	n++;
if (head==NULL) head=p1;
else p2->next=p1;
p2=p1;p1=(struct Stu *)malloc(LEN);
scanf("%d",&p1->num);
}
p2->next=NULL;return head;
}
struct Stu *insert(struct Stu *ah,struct Stu *bh)
{
struct Stu *pa1,*pa2,*pb1,*pb2;
pa2=pa1=ah;pb2=pb1=bh;
do 
{
while ((pb1->num>pa1->num)&&(pa1->next!=NULL))
{pa2=pa1;pa1=pa1->next;}
if (pb1->num<=pa1->num)
{
if (pa1==ah) ah=pb1;
else pa2->next=pb1;
pb1=pb1->next;
pb2->next=pa1;
pa2=pb2;
pb2=pb1;
}
}while ((pa1->next!=NULL)||(pa1==NULL&&pb1!=NULL));
return ah;

}
void print(struct Stu *head) //printf function
{
struct Stu *p1;
p1=head;
if (head==NULL) {printf("error!");return;}
do 
{printf("%d\t",p1->num);
p1=p1->next;
}while (p1!=NULL);
}


void main()
{
struct Stu *ahead,*bhead,*abh;
ahead=creat();bhead=creat();abh=insert(ahead,bhead);
print(abh);
}
