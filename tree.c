#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *lchild;
	struct node *rchild;
	int data;
}*root=NULL;
struct node *insert(struct node *root, int data);
struct node *create(int data);
void inorder(struct node *root);

void main()
{
	int data,o;
	do{
		printf("Enter input 1)Insert 2)Display\n");
		scanf("%d", &o);
		switch(o)
		{
			case 1:
			{
				printf("Enter data\n");
				scanf("%d", &data);
				root = insert(root, data);
				break;
			}
			case 2:
			{
				inorder(root);
			}
		}
	}while(1);

}
struct node *create(int data)
{
	struct node *temp; 
	temp = (struct node*)malloc(sizeof(struct node*));
	temp->data = data;
	temp->lchild = NULL;
	temp->rchild = NULL;
	return temp;
}
struct node *insert(struct node *root, int data)
{
	if(root == NULL)
	{
		root = create(data);
	}
	else if(data<root->data){
		root->lchild = insert(root->lchild, data);
	}
	else
	{
		root->rchild = insert(root->rchild, data);
	}
	return root;
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		printf("%d\t", root->data);
		inorder(root->rchild);
	}
}