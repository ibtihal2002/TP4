void inserte_AbrRecursive(int x,tree T)
{
    if(T==NULL)
    {
        T=CREATE_TREE(x,NULL,NULL);
        return;
    }
    if(x == (T)->key)
        return;
    if(x < (T)->key)
    {
        inserte_AbrRecursive(x,&(T)->left);
    }
    if(x>(T)->key)
    {
       inserte_AbrRecursive(x,&(T)->right);
    }
}

int search(int x,tree T)
{
    if (T == NULL)
        exit(EXIT_FAILURE);
    if(x < T->key)
        return search(x,T->right);
    if (x > T->key)
        return search(x,T->left);
    if (x == T->key)
        return 1;
}

int maxi(int x,int y)
{
    if (x > y)
        return x;
    return y;
}

int max_depth(int x,tree T)
{
    if (T == NULL)
        exit(EXIT_FAILURE);
   if (!T->left && !T->right)
       return 1+maxi(max_depth(x,T->left),max_depth(x,T->right));
    if (T->left == NULL)
        return max_depth(x,T->right);
    if (T->right == NULL)
        return max_depth(x,T->left);
}


