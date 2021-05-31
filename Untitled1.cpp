#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct bnode
{
	struct bnode *left;
	int info;
	struct bnode *right;
	
};
struct bnode *root;
typedef struct bnode;
int insrt();
int insertElement();
int main()
{
	BinaryTree *root=NULL;
	int choice;
	int num;
	do
	{
		printf("\n********* menu program***********\n");
		printf("|n1.insert as node)
	}
}
void insrt()
{
	struct bnode *nnode,*temp;
	nnode=(struct bnode*)malloc(size of(struct bnode));
	printf("\n Enter nodal  value");
	scanf("%d",nnode->info);
	nnode->left=nnode->right='\0';
	if(root==NULL)
	{
		root=nnode;
		return;
		
	}
	temp=root;
	start: if(nnode->info>=temp->info)
	
}
