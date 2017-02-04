#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct Stu)
struct Stu 
{
int num;
struct Stu *next;
};
int n=0;
struct Stu * creat()
{
struct Stu *head,*p1,*p2;
head=NULL;
p1=p2=(struct Stu *)malloc(LEN);
scanf("%d",&p1->num);
while (p1->num!=0)
{
n++;
if (n==1)
head=p1;
else
p2->next=p1;
p2=p1;
p1=(struct Stu *)malloc(LEN);
scanf("%d",&p1->num);
}
p2->next=NULL;
return head;
}
void print(struct Stu *head)
{
struct Stu *p;
p=head;
do
{
printf("%d",p->num);
p=p->next;
}while (p!=NULL);



}
int main()
{
print(creat());
return 0;

}

