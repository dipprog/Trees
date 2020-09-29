// Tree data structure
struct Node
{
    int data;
    Node* left;
    Node* right;
};

bool isComplete(Node* t)
{
    // If pointer is Null, means no tree at all
    if (t == nullptr)
    {
        return true;
    }
    // Condition for checking leave node
    if (!t->left && !t->right)
    {
        return true;
    }
    // Condition for checking given node as well as its left and right subtree
    // satisfying complete tree  property or not
    else if (t->left && t->right)
    {
        return(isComplete(t->left) && isComplete(t->right));
    }
    else
    {
        return false;
    }    
}