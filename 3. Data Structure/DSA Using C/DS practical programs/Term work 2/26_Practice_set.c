// Q.26 Write a C program to implement BST with the following operations:
// a) Insert an element into a binary search tree.
// b) Delete an element from a binary search tree.
// c) Search for a key element in a binary search tree.
// d) Count the number of nodes the binary search tree.
// e) Display the elements in in-order manner.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node *insertNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

struct Node *findMinValueNode(struct Node *node)
{
    struct Node *current = node;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

struct Node *deleteNode(struct Node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
        struct Node *temp = findMinValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

struct Node *searchNode(struct Node *root, int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }
    if (key < root->data)
    {
        return searchNode(root->left, key);
    }
    return searchNode(root->right, key);
}

int countNodes(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}

void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main()
{
    struct Node *root = NULL;
    int choice, data, key;

    do
    {
        printf("\nBinary Search Tree Operations:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Search for an element\n");
        printf("4. Count the number of nodes\n");
        printf("5. Display elements in in-order\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to insert: ");
            scanf("%d", &data);
            root = insertNode(root, data);
            break;
        case 2:
            printf("Enter element to delete: ");
            scanf("%d", &key);
            root = deleteNode(root, key);
            break;
        case 3:
            printf("Enter element to search: ");
            scanf("%d", &key);
            if (searchNode(root, key) != NULL)
            {
                printf("Element %d is found in the tree.\n", key);
            }
            else
            {
                printf("Element %d is not found in the tree.\n", key);
            }
            break;
        case 4:
            printf("Number of nodes in the tree: %d\n", countNodes(root));
            break;
        case 5:
            printf("In-order traversal: ");
            inorderTraversal(root);
            printf("\n");
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }

    } while (choice != 0);

    return 0;
}
