#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

int countInRange(Node* root, int x, int y) {
    if (root == NULL)
        return 0;

    if (root->data >= x && root->data <= y) {
        return 1 + countInRange(root->left, x, y) + countInRange(root->right, x, y);
    }

    if (root->data < x) {
        return countInRange(root->right, x, y);
    }

    return countInRange(root->left, x, y);
}

int main() {
    Node* root = NULL;

    int arr[] = {15, 10, 20, 8, 12, 17, 25};
    int n = 7;

    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    int x = 10, y = 20;

    cout << "Number of elements in range: "
         << countInRange(root, x, y);

    return 0;
}
