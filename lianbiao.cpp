#include <stdio.h>
#include <malloc.h>
struct Student 
{
int num;
char s;
struct Student *next;
} ;



void main()
{  
struct Student *p,*head,*q;
p=(struct Student *)malloc(sizeof(struct Student));
p->num=15;
p->s='m';
head = p;


p=(struct Student *)malloc(sizeof(struct Student));
head->next=p;
p->num=55;
p->s='w';
p->next=NULL;
q=p;

p=(struct Student *)malloc(sizeof(struct Student));
q->next=p;
p->num=55;
p->s='w';
p->next=NULL;
q=p;


p=(struct Student *)malloc(sizeof(struct Student));
q->next=p;
p->num=55;
p->s='w';
p->next=NULL;




p=head;






do 
{printf("%d  %c",p->num,p->s);
p=p->next;}
while (p!=NULL);	
}