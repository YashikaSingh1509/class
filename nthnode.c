#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
void nth()
{
	struct node* head;
	struct node* h;
	struct node* s;int n;
	printf("Enter the nth term");
	scanf("%d",&n);
	head=(struct node*)malloc(sizeof(struct node));
	h=(struct node*)malloc(sizeof(struct node));
	s=(struct node*)malloc(sizeof(struct node));
	h,s=head;
	while(n>0)
	{
		s=s->next;
		n--;
	}
	while(s->next!=NULL)
	{
		h=h->next;
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
  nth();
  printLL();
  return 0;
}