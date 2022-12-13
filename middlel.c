#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
void middlenormal()
{
	struct node* head;
	struct node* s;
	head=(struct node*)malloc(sizeof(struct node));
	s=(struct node*)malloc(sizeof(struct node));
	int count=0;int mid;
	s=head;
	while(s!=NULL)
	{
		count++;
		s=s->next;
	}
	mid=count/2;
	if(count&1==0)
	{
		mid=1;
	}
	s=head;
	while(mid>0)
	{
		s=s->next;
	}
}
void printLL()
{
	struct node* head;
	struct node* s;
	s=head;
	while(s->next!=NULL)
	{
		printf("%d",s->data);
		printf("->");
		s=s->next;
	}
	printf("%d",s->data);
}
int main()
{
	middlenormal();
	printLL();
	return 0;
}