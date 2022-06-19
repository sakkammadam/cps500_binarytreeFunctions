#include <stdio.h>
#include "treeFunctions.h"

int main() {
    // Initialize a root node
    TreeNode* rootR = initTreeNode(50);
    // Create a tree
    createBinaryTreeRecurs(rootR, 30);
    createBinaryTreeRecurs(rootR, 20);
    createBinaryTreeRecurs(rootR, 40);
    createBinaryTreeRecurs(rootR, 70);
    createBinaryTreeRecurs(rootR, 60);
    createBinaryTreeRecurs(rootR, 80);
    // Print using Breadth First Search
    printf("\nCreated a new tree....");
    bfsPrint((Tree*)&rootR);

    // Search for node 1000 --- not present
    binarySearch(rootR, 1000); // not found

    // Search for node 80
    binarySearch(rootR, 80);

    // Deleting a leaf node
    deleteNode((Tree*)&rootR, 80);
    printf("\nAfter deleting leaf node 80!");
    // print and confirm the node has been removed!
    bfsPrint((Tree*)&rootR);



    return 0;
}
