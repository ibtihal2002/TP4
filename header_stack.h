#ifndef HEADER_STACK_H
#define HEADER_STACK_H


#include<stdio.h>
#include<stdlib.h>
#define N 200
struct node
{
	int key;
	struct node *left;
	struct node *right;
};
typedef struct node node;
typedef struct node* tree;

struct stack_tree
{
    tree head[N];
    unsigned length;
};
typedef struct stack_tree stack_tree;

//prototypes
   //stack
void push_in(tree , stack_tree);
tree pop(stack_tree *);
int isEmpty(stack_tree);
   //tree
void free_tree(tree *);
tree create_tree(int ,tree ,tree);




#endif