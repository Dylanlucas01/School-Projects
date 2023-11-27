#include "IntBinaryTree.h"
#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>
#include <cstdlib>
using namespace std;

// ********************************************************
// name:      ~IntBinaryTree
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The ~IntBinaryTree function is the deconstructor
// ********************************************************
void IntBinaryTree::destroy(TreeNode *nodePtr)
{
    if(nodePtr)
    {
        if(nodePtr->left)
        {
            destroy(nodePtr->left);
        }
        if(nodePtr->right)
        {
            destroy(nodePtr->right);
        }
        delete nodePtr;
    }
}

// ********************************************************
// name:      insert
// called by: insertNode
// passed:    *&nodePtr, *&newNode
// returns:   nothing
// calls:     insert
// The insert function inserts node into the correct position of the tree
// ********************************************************
void IntBinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
    if(nodePtr == nullptr)
    {
        nodePtr = newNode;
    }
    else if(newNode->value < nodePtr->value)
    {
        insert(nodePtr->left, newNode);
    }
    else
    {
        insert(nodePtr->right, newNode);
    }
}

// ********************************************************
// name:      insertNode
// called by: insertNode
// passed:    num
// returns:   nothing
// calls:     insert
// The insert function creates a node  and then insert it into the tree
// ********************************************************
void IntBinaryTree::insertNode(int num)
{
    TreeNode *newNode = nullptr;
    newNode = new TreeNode;
    newNode->value = num;
    newNode->left = newNode->right = nullptr;
    insert(root, newNode);
}

// ********************************************************
// name:      displayInOrder
// called by: displayInOrder
// passed:    *nodePtr
// returns:   nothing
// calls:     displayInOrder
// The displayInOrder function displays the trees contense in order
// ********************************************************
void IntBinaryTree::displayInOrder(TreeNode *nodePtr)
{
    if(nodePtr)
    {
        displayInOrder(nodePtr->left);
        cout << nodePtr->value << " ";
        displayInOrder(nodePtr->right);
    }
}

// ********************************************************
// name:      leafCounter
// called by: leafCounter
// passed:    *nodePtr
// returns:   an int representing the count (leafs)
// calls:     leafCounter
// The leafCounter function transverses the tree and locates which nodes are leafs
// ********************************************************
int IntBinaryTree::leafCounter(TreeNode *nodePtr)
{
    if(nodePtr == nullptr)
    {
        return 0;
    }
    else if(nodePtr->left == nullptr && nodePtr->right == nullptr)
    {
        return 1;
    }
    else
    {
        return leafCounter(nodePtr->left) + leafCounter(nodePtr->right);
    }
}


// ********************************************************
// name:      treeHeight
// called by: treeHeight
// passed:    *nodePtr
// returns:   an int representing the height
// calls:     treeHeight
// The treeHeight function transverses the tree and locates the deepest sublevel
// ********************************************************
int IntBinaryTree::treeHeight(TreeNode *nodePtr)
{
    if(nodePtr == nullptr)
    {
        return 0;
    }
    else
    {
        int leftHeight = treeHeight(nodePtr->left);
        int rightHeight = treeHeight(nodePtr->right);
        
        if(leftHeight > rightHeight)
        {
            return leftHeight + 1;
        }
        else
        {
            return rightHeight + 1;
        }
    }
}

// ********************************************************
// name:      treeWidth
// called by: treeWidth
// passed:    *nodePtr
// returns:   an int representing the width of the tree
// calls:     treeHeight, levelWidth
// The treeWidth function transverses each sublevel of the tree and locates the widest sublevel
// ********************************************************
int IntBinaryTree::treeWidth(TreeNode *nodePtr)
{
    int maxWidth = 0;
    int width;
    int height = treeHeight(nodePtr);
    
    for(int i=1; i<=height; i++)
    {
        width = levelWidth(nodePtr, i);
        if(width > maxWidth)
        {
            maxWidth = width;
        }
    }
    
    return maxWidth;
}

// ********************************************************
// name:      levelWidth
// called by: treeWidth, levelWidth
// passed:    *nodePtr, level
// returns:   an int representing the width of the sublevel
// calls:     levelWidth
// The levelWidth function gets the width of a specific sublevel
// ********************************************************
int IntBinaryTree::levelWidth(TreeNode *nodePtr, int level)
{
    if(nodePtr == nullptr)
    {
        return 0;
    }
    else if(level == 1)
    {
        return 1;
    }
    else
    {
        return levelWidth(nodePtr->left, level -1) + levelWidth(nodePtr->right, level -1);
    }
}