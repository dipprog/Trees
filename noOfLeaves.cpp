// Tree data structure
struct Node
{
    int data;
    Node* left;
    Node* right;
};

int noOfLeaves(Node* t)
{
    // If tree t is null
    if(!t) 
        return 0;
    // if given node is a leave
    if(!t->left && !t->right)
        return 1;
    else
        // if not leave, check in left and right sub tree 
        // recursively and find of no of leaves node.
        return(noOfLeaves(t->left) + noOfLeaves(t->right));
}