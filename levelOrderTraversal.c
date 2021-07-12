#include<stdio.h>
#include <stdlib.h>

// NODE STUCTURE

struct node{
    int data;
    struct node *left;
    struct node *right;
};

// ROOT NODE

struct node*root;

// INSERTION IS DONE USING RECURSION

struct node* insert(int index,int a[],int N)
{
	// THIS CONDITION CHECKS WHETHER THE INDEX IS WITHIN THE NUMBER OF ELEMENTS IN THE ARRAY.
	if(index<N)
	{
		struct node*temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=a[index];
		// IN AN ARRAY REPRESENTATION OF THE LEVEL-ORDER BINARY TREE, EACH NODE OF LEVEL-ORDER BINARY TREE HAS ITS LEFT AND RIGHT NODE AT THE 
		// INDEX (2*I)+1 AND (2*i)+2 
		// WHERE I IS THE INDEX OF THE PARENT NODE.
		temp->left=insert(((2*index)+1),a,N);
		temp->right=insert(((2*index)+2),a,N);
		
		return temp;
	}
	return NULL;
}

// PRE-ORDER TRAVERSAL

void preorder(struct node*ptr)
{
	if(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

// IN-ORDER TRAVERSAL

void inorder(struct node*ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		printf("%d ",ptr->data);
		inorder(ptr->right);
	}
}

// POST-ORDER TRAVERSAL

void postorder(struct node*ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%d ",ptr->data);
	}
}

// MAIN METHOD

int main()
{
	int N;
    	scanf("%d",&N);
	int i,a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	root = insert(0,a,N);
	
    	preorder(root);
	printf("\n");
    	inorder(root);
	printf("\n");
    	postorder(root);

}
