/*
   program for implementing the binary search tree and do all the operations on it.
 */
#include<stdio.h>
#include<stdlib.h>
struct bst
{
	int val;
	struct bst *lv,*rv;
};
struct bst *root=NULL;
void create();
struct bst * insert(int ,struct bst *);
struct bst * delete(int,struct bst *);
struct bst * inorderpredecessor(struct bst *);
struct bst * search(int ,struct bst *);
void inorder(struct bst *node);
void preorder(struct bst *node);
void postorder(struct bst *node);
int min(struct bst *);
int max(struct bst *);
void create()
{
	int n,i;
	struct bst *node,*new,*pre;
	if(root==NULL)
		root=(struct bst *)malloc(sizeof(struct bst));
	node=root;
	printf("\nEnter the Number of Values : ");
	scanf("%d",&n);
	printf("\nEnter the Values : ");
	scanf("%d",&node->val);
	node->lv=NULL;
	node->rv=NULL;
	for(i=2;i<=n;i++)
	{
		new=(struct bst *)malloc(sizeof(struct bst));
		scanf("%d",&new->val);
		new->lv=NULL;
		new->rv=NULL;
		while(node!=NULL)
		{		
			pre=node;
			if(new->val==node->val)		
			{			
				printf("\nDuiplicate Element : %d\n",new->val);			
				free(new);			
				new=NULL;		
				break;		
			}
			else if(new->val<node->val)		
				node=node->lv;
			else
				node=node->rv;
		}
		if(node!=NULL)
		{
			node=root;
			continue;
		}
		else if(pre->val<new->val)
			pre->rv=new;
		else
			pre->lv=new;
		node=root;
	}
}
struct bst * insert(int key,struct bst *node)
{
	if(node==NULL)
	{
		struct bst *new;
		new=(struct bst *)malloc(sizeof(struct bst ));
		new->val=key;
		new->lv=NULL;
		new->rv=NULL;
		return new;								//  Returns |
	}											//			|
	if(key==node->val)							//			|
	{													//	|
		printf("\nDuplicate Element : %d\n",key);		//	|	
	}													//	|
	else if(key<node->val)						//			|
		node->lv=insert(key,node->lv);			//	Here 	|
	else										//			|
		node->rv=insert(key,node->rv);			//	Here    | 
}
struct bst * delete(int key,struct bst *node)
{
	struct bst * ipre;
	if(node==NULL)
		return NULL;
	if(node->lv==NULL && node->rv==NULL)
	{
		free(node);
		return NULL;
	}
	if(key < node->val)
		node->lv=delete(key,node->lv);
	else if(key > node->val)
		node->rv=delete(key,node->rv);
	else
	{
		ipre=inorderpredecessor(node);
		node->val=ipre->val;
		node->lv=delete(ipre->val,node->lv);
	}
	return node;
}
struct bst * inorderpredecessor(struct bst *node)
{
	node=node->lv;
	while(node->rv!=NULL)
		node=node->rv;
	return node;
}
struct bst * search(int key,struct bst *node)
{
 	if(node!=NULL)
	{
		if (key<node->val)
			return search(key,node->lv);
		else if(key>node->val)
			return search(key,node->rv);
		else
			return node;
	}
	return NULL;
}
void inorder(struct bst *node)
{
	if(node!=NULL)
	{
		inorder(node->lv);
		printf("%d ",node->val);
		inorder(node->rv);
	}
}
void preorder(struct bst *node)
{ 
	if(node!=NULL)
	{
		printf("%d ",node->val);
		preorder(node->lv);
		preorder(node->rv);
	}
}
void postorder(struct bst *node)
{
	if(node!=NULL)
	{
		postorder(node->lv);
		postorder(node->rv);
		printf("%d ",node->val);
	}
}
int min(struct bst *node)
{
	if(node->lv!=NULL)
		return min(node->lv);
	return node->val;
}
int max(struct bst *node)
{
	while(node->rv!=NULL)
		return max(node->rv);
	return node->val;
}
int main()
{
	int data,ch,key;
	printf("\n 0: Exit !");
	printf("\n 1: Create a binary search tree .");
	printf("\n 2: Insert a new node .");
	printf("\n 3: Delete a node from BST .");
	printf("\n 4: Search an element .");
	printf("\n 5: Traverse the tree INOEDER .");
	printf("\n 6: Traverse the tree PREOEDER .");
	printf("\n 7: Traverse the tree POSTOEDER .");
	printf("\n 8: Find Minimum value of the BST .");
	printf("\n 9: Find Maximum Value of the BST .\n");
	while(1)
	{
		if(root==NULL)
			printf("\nBinary Search Tree is Empty !\nCreate it to Proceed Further ..\n");
		printf("\nEnter your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				printf("\nThank You !\n\n");
				exit(0);
				break;
			case 1:
				create();
				break;
			case 2:
				printf("\nEnter the Value to insert : ");
				scanf("%d",&data);
				insert(data,root);
				break;
			case 3:
				printf("\nEnter the Value to delete : ");
				scanf("%d",&data);
				if(search(data,root)!=NULL)
					delete(data,root);
				else
					printf("\n%d is Absent in Tree !\n",data);
				break;
			case 4:
				printf("\nEnter the Value : ");
				scanf("%d",&key);
				if(search(key,root)!=NULL)
					printf("\nKey is Present ..\n");
				else
					printf("\nKey Not Found !\n");
				break;
			case 5:
				printf("\nTraversal in Inorder : ");
				inorder(root);
				printf("\n");
				break;
			case 6:
				printf("\nTraversal in Preorder : ");
				preorder(root);
				printf("\n");
				break;
			case 7:
				printf("\nTraversal in Postorder : ");
				postorder(root);
				printf("\n");
				break;
			case 8:
				printf("\nMinimum Element is : %d\n",min(root));
				break;
			case 9:
				printf("\nMaximum Element is : %d\n",max(root));
				break;
			default:
				printf("\nINVALID CHOICE !\n");
		}
	}
}
