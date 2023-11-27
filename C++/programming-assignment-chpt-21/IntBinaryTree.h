#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H
#include <iostream>
#include <string>
using namespace std;

// Access Specifiers
class IntBinaryTree
{
private:
    
    // Stack structure
    struct TreeNode
    {
        int value;
        TreeNode *left;
        TreeNode *right;
    };
    
    TreeNode *root;
    
public:
    // Constructor
    IntBinaryTree()
        {   root = nullptr;   }
    
    // Destructor
    ~IntBinaryTree()
        {   destroy(root);   }
    
    // functions
    void destroy(TreeNode *);
    void insert(TreeNode *&, TreeNode *&);
    void insertNode(int);
    
    void displayInOrder(TreeNode *);
    void displayInOrder()
        {   displayInOrder(root);   }
        
    int leafCounter(TreeNode *);
    int leafCounter()
        {   return leafCounter(root);   }
        
    int treeHeight(TreeNode *);
    int treeHeight()
        {   return treeHeight(root);   }
        
    int treeWidth(TreeNode *);
    int treeWidth()
        {   return treeWidth(root);   }
        
    int levelWidth(TreeNode *, int);
};
#endif