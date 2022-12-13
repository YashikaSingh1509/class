#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};

void createlist(){
	struct node *head,*newnode,*temp;
	head=NULL;
	int c;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if (head==NULL){
		head=temp=newnode;
		
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
	temp=head;
	while(temp!=0){
		printf("%d",temp->data);
		temp=temp->next;
		c++;
	}
}
void printLL(){
	struct node *head;
	struct node *s;
	s=head;
	while(s!=NULL){
		printf("%d",s->data);
		printf("->");
		s=s->next;
	}
}
void insert_at_beg(){
	struct node *head,*newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data u want to insert");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	
}
void insert_at_end(){
	struct node *newnode,*head,*temp;
	newnode->next=NULL;
	temp=head;
	while(temp->next!=0){
		temp=temp->next;
		temp->next=newnode;
	}
}
void insert_beforedata(){
	struct node *newnode,*temp;
	printf("enter data");
	scanf("%d",newnode->data);
	newnode->next=temp->next;
	temp->next=newnode;
}
void delete_from_beg(){
	struct node *temp,*head;
	temp=head;
	head=head->next;
	free(temp);
	
}
void delete_from_end(){
	struct node *head,*temp,*prevnode;
	temp=head;
	while(temp->next!=0){
		prevnode=temp;
		temp=temp->next;
		if (temp==head){
			head=NULL;
		}
		else{
			prevnode->next=NULL;
			free(temp);
		}
	}
}


void reverse(){
	struct node *head,*prevnode,*nextnode,*currentnode;
	prevnode=NULL;
	currentnode=nextnode=head;
	while(nextnode!=NULL){
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
	
}
int main(){
	insert_at_beg();
	insert_at_end();
	insert_beforedata();
	delete_from_beg();
	delete_from_end();
	reverse();
	printLL();
}