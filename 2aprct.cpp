#include<cstdlib>
#include<iostream>
using namespace std;
int n,i;
struct node
{
	int info;
	struct node*next;
}
*start;
void create_list();
void display_list();
void search(struct node*head,int key);
int main()
{
int item;
cout<<"\n enter no of nodes:";
cin>>n;
create_list();
display_list();
cout<<"\n searching element from linked list";
cout<<"enter the element to be search:";
cin>>item;
search(start,item);
return 0;
}
void create_list()
{
	struct node*pointer,*newNode;
	int info;
	start=(struct node*)malloc(sizeof(struct node));
	if(start=NULL)
	{
		cout<<"\n unable to allocate memory:";
	}
	else
	{
		cout<<"\n enter the data of Node 1:";
		cin>>info;
		start->info=info;
		start->next=NULL;
		pointer=start;
		for(i=2;i<=n;i++)
		{
			newNode=(struct node*)malloc(sizeof(struct node));
			if(newNode==NULL)
			{
				cout<<"\n enter the data of node"<<i<<":";
				cin>>info;
				newNode->info=info;
				newNode->next=NULL;
				pointer->next=newNode;
				pointer=pointer->next;
			}
		}
	}
cout<<"\n one way linked list  created successfully\n";
}
void display_list()
{
	struct node*pointer;
	if(start==NULL)
	{
		cout<<"\n linked list is empty";
	}
	else
	{
		pointer=start;
		while(pointer!=NULL)
		{
			cout<<"->"<<pointer->info;
			pointer=pointer->next;
		}
	}
}
void search(struct node*head,int key)
{
	while(head!=NULL)
	{
		if(head->info==key)
		{
			cout<<"\n element"<<key<<"found at position:"<<head;
			return;
		}
		head=head->next;
	}
	cout<<"\n element not found";
}
