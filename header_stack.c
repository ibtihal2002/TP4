#include<header_stack.h>



//stack
void push(tree T, stack_tree * F)
{
    if(F->length==N)
    {
        printf("File pleine !\n");
        return;
    }
    F->head[F->length]=T;
    F->length+=1;
    return;
}

int isEmpty(stack_tree F)
{
    if(F.length==0)
        return 1;
    return 0;
}

tree pop(stack_tree * F)
{
    if(estVideFile(*F))
    {
        return NULL;
    }
    tree T=F->head[0];
    int i;
    for(i=1;i<F->length;i++)
        F->head[i-1]=F->head[i];
    F->length-=1;
    return T;
}

// tree 
tree create_tree(int x,tree T_1,tree T_2)
{
    tree T=(tree)malloc(sizeof(node));
    T->key=x;
    T->left=T_1;
    T->right=T_2;
    return T;
}

void free_tree(tree *T)
{
    tree temp=*T;
    if(temp==NULL)
        return;
    if(temp->left!=NULL)
       free_tree(&temp->left);
    if(temp->right!=NULL)
        free_tree(&temp->right);
    free(temp);
    *T=NULL;
}