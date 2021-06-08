#include<stdlib.h>
#include<stdio.h>
struct node
{
	int key;
	struct node *left;
	struct node *right;
};
typedef struct node node;
typedef struct node* tree;

int tree_depth(tree T)
{
	if(T==NULL)
	exit(EXIT_FAILURE);
	return T->key;		
}

int tree_diameter(tree T)
{
	if (T)
	{
		printf(" T : %d \n", T->key);
	}
	int s=0;
	int v=0;
	int sum =0;
	if (!T->left && !T->right)
	{
		printf("Error !");
		return 0;
	}
	if (T->left)
		s = tree_diameter(T->left);
	if (T->right)
		v = tree_diameter(T->right);
	printf ("%d , %d", s, v);
		if (sum < s + v + 1)
			sum = s + v + 1;
		
	return sum;
}

/*int leaf_sum(tree T)
{
	if(T==NULL)
		exit(EXIT_FAILURE);
	while(T != NULL)
		
}*/
tree create_tree(int x,tree T_1,tree T_2)
{
    tree T=(tree)malloc(sizeof(node));
    T->key=x;
    T->left=T_1;
    T->right=T_2;
    return T;
}

int main()
{
    tree G2=create_tree(4,NULL,NULL);
    tree G3=create_tree(7,NULL,NULL);
    tree G4=create_tree(6,G2,G3);
    int s = tree_diameter(G4);   
    printf("diameter of T is : %d", s);  
    return 0;
}



